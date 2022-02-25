/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:46:37 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 15:03:24 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes_bonus/push_swap_checker.h"

int	do_pb(t_list **stack_A, t_list **stack_B)
{
	if (!ft_lstsize (*stack_A))
		return (0);
	send_to_top (stack_A, stack_B);
	return (1);
}
