/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:58:32 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 14:41:28 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	do_pa(t_list **stack_A, t_list **stack_B)
{
	if (!ft_lstsize (*stack_B))
		return (0);
	send_to_top (stack_B, stack_A);
	write (1, "pa\n", 3);
	return (1);
}
