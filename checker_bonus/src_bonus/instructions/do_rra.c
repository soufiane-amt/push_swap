/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 11:47:59 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 15:09:55 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes_bonus/push_swap_checker.h"

int	do_rra(t_list **stack_A)
{
	if (!ft_lstsize (*stack_A))
		return (0);
	bottom_to_top (stack_A);
	return (1);
}
