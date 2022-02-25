/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:20:00 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 14:46:09 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	do_rrr(t_list **stack_A, t_list **stack_B)
{
	do_rra(stack_A);
	do_rrb(stack_B);
	write (1, "rrr\n", 4);
	return (1);
}
