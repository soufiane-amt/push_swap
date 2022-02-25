/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:52:39 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 14:14:00 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	radix_sort(t_list **stack_A, t_list **stack_B)
{
	int	bit_max;
	int	i;
	int	j;
	int	stack_size;

	stack_size = ft_lstsize(*stack_A);
	bit_max = ft_binarynbr_len (top_nbr(stack_A));
	i = 0;
	while (i < bit_max)
	{
		j = 0;
		while (j < stack_size)
		{
			if ((((*stack_A)->content >> i) & 1) == 1)
				do_ra(stack_A);
			else
				do_pb(stack_A, stack_B);
			j++;
		}
		while (ft_lstsize (*stack_B))
		{
			do_pa (stack_A, stack_B);
		}
		i++;
	}
}
