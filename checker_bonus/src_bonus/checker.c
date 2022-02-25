/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:52:55 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 18:26:11 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes_bonus/push_swap_checker.h"

void	free_all(t_data *data, int *elements_added)
{
	ft_lstclear (data -> stack_a);
	ft_lstclear (data -> stack_b);
	if (*elements_added)
	{
		ft_lstclear (data -> instructions);
		free_arr(data->arr);
	}
	free (data);
}

int	check_mov(int argc, char **argv)
{
	t_data	*data;
	int		elements_added;
	int		executed;

	elements_added = 0;
	data = (t_data *) malloc (sizeof (t_data));
	data -> stack_b = (t_list **) malloc (sizeof(t_list *));
	if (!data || !data -> stack_b)
		exit(1);
	*(data -> stack_b) = NULL;
	data -> stack_a = fill_lst(argc, argv);
	elements_added = add_instr(data);
	executed = exec_lst(data);
	if (stack_a_is_sorted (data -> stack_a)
		&& !ft_lstsize (*data -> stack_b) && elements_added && executed)
		ft_putstr_fd ("OK\n", 2);
	else
		ft_putstr_fd ("KO\n", 2);
	free_all(data, &elements_added);
	return (1);
}

int	main(int argc, char **argv)
{
	if (!check_error(argc, argv))
		ft_putstr_fd("Error\n", 2);
	else
		check_mov (argc, argv);
}
