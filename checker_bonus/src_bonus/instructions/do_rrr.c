/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:20:00 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 15:10:20 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes_bonus/push_swap_checker.h"

int	do_rrr(t_list **stack_A, t_list **stack_B)
{
	if (!do_rra(stack_A) || !do_rrb(stack_B))
		return (0);
	return (1);
}
