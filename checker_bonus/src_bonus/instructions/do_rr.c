/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:18:53 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 15:09:42 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes_bonus/push_swap_checker.h"

int	do_rr(t_list **stack_A, t_list **stack_B)
{
	if (!do_ra(stack_A) || !do_rb(stack_B))
		return (0);
	return (1);
}
