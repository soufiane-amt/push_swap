/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:05:09 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 15:10:45 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes_bonus/push_swap_checker.h"

int	do_sb(t_list **stack_B)
{
	if (ft_lstsize (*stack_B) < 2)
		return (0);
	swap_top(stack_B);
	return (1);
}
