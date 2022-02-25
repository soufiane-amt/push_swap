/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 11:45:02 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 15:07:23 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes_bonus/push_swap_checker.h"

int	do_ra(t_list **stack_A)
{
	if (!ft_lstsize (*stack_A))
		return (0);
	top_to_bottom(stack_A);
	return (1);
}
