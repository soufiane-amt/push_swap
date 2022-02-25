/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:09:44 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 15:09:22 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes_bonus/push_swap_checker.h"

int	do_rb(t_list **stack_B)
{
	if (!ft_lstsize (*stack_B))
		return (0);
	top_to_bottom(stack_B);
	return (1);
}
