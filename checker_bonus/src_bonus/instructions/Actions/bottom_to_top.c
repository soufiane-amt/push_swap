/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bottom_to_top.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:15:08 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 15:02:29 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes_bonus/push_swap_checker.h"

int	bottom_to_top(t_list **stack_a)
{
	int		last_element;
	t_list	*node;

	node = ft_lstlast(*stack_a);
	last_element = node->content;
	if (!(ft_lstdelete_last (stack_a)))
		return (0);
	ft_lstadd_front(stack_a, ft_lstnew(last_element));
	return (1);
}
