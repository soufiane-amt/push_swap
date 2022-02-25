/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 11:45:32 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 15:10:31 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes_bonus/push_swap_checker.h"

int	do_sa(t_list **stack_A)
{
	if (ft_lstsize(*stack_A) < 2)
		return (0);
	swap_top(stack_A);
	return (1);
}
