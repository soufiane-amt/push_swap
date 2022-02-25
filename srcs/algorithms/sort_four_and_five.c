/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four_and_five.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:55:23 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 14:14:34 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_four_and_five(t_list **stack_A, t_list **stack_B)
{
	int	smallest_nbr;

	while (ft_lstsize (*stack_A) > 3)
	{
		smallest_nbr = bottom_nbr (stack_A);
		if ((*stack_A)->content == smallest_nbr)
			do_pb (stack_A, stack_B);
		else if ((*stack_A)->next->content == smallest_nbr)
			do_sa (stack_A);
		else if (ft_lstlast (*stack_A)->content == smallest_nbr)
			do_rra (stack_A);
		else if (ft_get_prelast (stack_A)->content == smallest_nbr)
			do_rra (stack_A);
		else
			do_ra(stack_A);
	}
	sort_three (stack_A);
	do_pa(stack_A, stack_B);
	if (ft_lstsize (*stack_B) == 1)
		do_pa(stack_A, stack_B);
}
