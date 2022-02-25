/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_to_top.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:39:58 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 14:40:31 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

int	send_to_top(t_list **src, t_list **dst)
{
	int	content;

	content = (*src)->content;
	ft_lstdelete_top (src);
	ft_lstadd_front (dst, ft_lstnew(content));
	return (0);
}
