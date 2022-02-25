/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:32:22 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 15:21:06 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes_bonus/push_swap_checker.h"

void	exec(t_data *data, int index, int *succeeded)
{
	if (index == 0)
		*succeeded = do_sa (data -> stack_a);
	else if (index == 1)
		*succeeded = do_sb (data ->stack_b);
	else if (index == 2)
		*succeeded = do_ss (data ->stack_a, data ->stack_b);
	else if (index == 3)
		*succeeded = do_pa(data ->stack_a, data ->stack_b);
	else if (index == 4)
		*succeeded = do_pb (data ->stack_a, data ->stack_b);
	else if (index == 5)
		*succeeded = do_ra (data -> stack_a);
	else if (index == 6)
		*succeeded = do_rb (data ->stack_b);
	else if (index == 7)
		*succeeded = do_rr (data ->stack_a, data ->stack_b);
	else if (index == 8)
		*succeeded = do_rra (data ->stack_a);
	else if (index == 9)
		*succeeded = do_rrb (data ->stack_b);
	else if (index == 10)
		*succeeded = do_rrr (data ->stack_a, data ->stack_b);
}

int	exec_lst(t_data *data)
{
	int		i;
	t_list	*temp;

	i = 0;
	temp = (*data ->instructions);
	while (temp)
	{
		exec (data, temp -> content, &i);
		if (!(i))
			return (0);
		temp = temp->next;
	}
	return (1);
}
