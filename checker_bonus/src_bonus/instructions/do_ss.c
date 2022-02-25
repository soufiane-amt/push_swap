/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:15:57 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 15:11:01 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes_bonus/push_swap_checker.h"

int	do_ss(t_list **stack_A, t_list **stack_B)
{
	if (!do_sa(stack_A) || !do_sb(stack_B))
		return (0);
	return (1);
}
