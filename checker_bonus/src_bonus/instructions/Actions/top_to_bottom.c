/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   top_to_bottom.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:33:46 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 15:02:49 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes_bonus/push_swap_checker.h"

int	top_to_bottom(t_list **stack_A)
{
	int	n;

	n = (*stack_A)->content;
	if (!ft_lstdelete_top (stack_A))
		return (0);
	ft_lstadd_back (stack_A, ft_lstnew(n));
	return (1);
}
