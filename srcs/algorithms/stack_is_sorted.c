/* ************************************************************************** */
/*                                                                          */
/*                                                        :::      ::::::::   */
/*   stack_is_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:40:01 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 14:22:01 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	stack_a_is_sorted(t_list **stack)
{
	t_list	*temp;

	temp = *stack;
	while (temp && temp -> next)
	{
		if (temp -> content > temp -> next ->content)
			return (0);
		temp = temp->next;
	}
	return (1);
}
