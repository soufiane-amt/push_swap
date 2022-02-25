/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelete_last.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:05:38 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 14:37:32 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_lstdelete_last(t_list **lst)
{
	int		i;
	t_list	*last;
	t_list	*prelast;

	i = 0;
	if (!(*lst) || !(*lst)->next)
		return (0);
	prelast = *lst;
	while (i < ft_lstsize(*lst) - 2)
	{
		prelast = prelast -> next;
		i++;
	}
	last = prelast -> next;
	free (last);
	last = NULL;
	prelast -> next = NULL;
	return (1);
}
