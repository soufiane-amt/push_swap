/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:35:24 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 18:28:45 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_elements(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	stack_b = (t_list **) malloc (sizeof(t_list *));
	if (!stack_b)
		exit (1);
	*stack_b = NULL;
	stack_a = fill_lst(argc, argv);
	if (!stack_a_is_sorted (stack_a))
	{
		if (argc == 4 || argc == 3)
			sort_three (stack_a);
		else if (argc == 6 || argc == 5)
			sort_four_and_five (stack_a, stack_b);
		else if (argc > 6)
			sort_largest_stack (stack_a, stack_b, argc, argv);
	}
	ft_lstclear (stack_a);
	ft_lstclear (stack_b);
}

int	main(int argc, char **argv)
{
	if (!check_error(argc, argv))
		ft_putstr_fd("Error\n", 2);
	else
		sort_elements (argc, argv);
}
