/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_top.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:42:10 by samajat           #+#    #+#             */
/*   Updated: 2022/02/12 11:35:07 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

int swap_top(t_list **stack_A)
{
	int		a;
	int		b;

	if (!stack_A || !(*stack_A)->next)
		return (0);
	a = (*stack_A)->content;
	b = (*stack_A)->next->content;
	(*stack_A)->content = b;
	(*stack_A)->next->content = a;
	return (1);
}