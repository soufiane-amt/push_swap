/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_is_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:40:01 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 15:21:35 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes_bonus/push_swap_checker.h"

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
