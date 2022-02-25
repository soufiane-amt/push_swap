/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 03:53:07 by samajat           #+#    #+#             */
/*   Updated: 2022/02/18 13:45:27 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes_bonus/push_swap_checker.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = (*lst);
	(*lst) = new;
}
