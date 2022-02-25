/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_largest_lst.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:54:27 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 14:17:01 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_largest_stack(t_list **lst_A, t_list **lst_B, int argc, char **arg)
{
	substitute_stack (lst_A, argc, arg);
	radix_sort (lst_A, lst_B);
}
