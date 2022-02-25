/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:57:46 by samajat           #+#    #+#             */
/*   Updated: 2022/02/12 16:33:51 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes_bonus/push_swap_checker.h"

int	ft_isnbr(char *str)
{
	int	i;
	int	length;

	i = 0;
	length = ft_strlen (str);
	if (str[i] == '-' || str[i] == '+')
	{
		i = 1;
		if (length == 1)
			return (0);
	}
	while (i < length)
	{
		if (!ft_isdigit (str[i]))
			return (0);
		i++;
	}
	return (1);
}
