/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_prelast.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:22:54 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 15:00:04 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes_bonus/push_swap_checker.h"

t_list	*ft_get_prelast(t_list **stack)
{
	t_list	*temp;

	temp = *stack;
	if (temp && temp -> next)
		while (temp->next->next)
			temp = temp->next;
	return (temp);
}
