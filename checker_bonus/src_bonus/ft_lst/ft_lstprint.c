/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:13:20 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 15:01:11 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes_bonus/push_swap_checker.h"

void	ft_lstprint(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	while (temp)
	{
		ft_putnbr_fd(temp->content, 1);
		write (1, "\n", 1);
		temp = temp->next;
	}
}
