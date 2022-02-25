/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   top_to_bottom.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:33:46 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 14:40:56 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

int	top_to_bottom(t_list **stack_A)
{
	int	n;

	n = (*stack_A)->content;
	if (!ft_lstdelete_top (stack_A))
		return (0);
	ft_lstadd_back (stack_A, ft_lstnew(n));
	return (1);
}
