/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_binarynbr_len.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:52:20 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 14:48:00 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_binarynbr_len(int nbr)
{
	char			base[2];
	static int		length;

	base[0] = '0';
	base[1] = '1';
	if (nbr > 1)
	{
		ft_binarynbr_len(nbr / 2);
		ft_binarynbr_len(nbr % 2);
	}
	else
	{
		length++;
	}
	return (length);
}
