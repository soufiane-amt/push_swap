/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 03:40:44 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 16:44:06 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*node;

	node = (struct s_list *) malloc (sizeof(struct s_list));
	if (!node)
		exit (1);
	node -> content = content;
	node -> next = NULL;
	return (node);
}
