/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:10:23 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 15:10:09 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes_bonus/push_swap_checker.h"

int	do_rrb(t_list **stack_B)
{
	if (!ft_lstsize (*stack_B))
		return (0);
	bottom_to_top (stack_B);
	return (1);
}
