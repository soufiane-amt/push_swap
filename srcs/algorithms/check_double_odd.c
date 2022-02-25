/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double_odd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 18:53:59 by samajat           #+#    #+#             */
/*   Updated: 2022/02/14 13:50:08 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"


int Check_double_odds (int	**elements)
{
	int i;
	int j;
	int l;

	i = 0;
	j = 0;
	l = 0;
	while (i < 3)
	{
		j = i + 1;
		while (j < 3)
		{
			l = 0;
			while (l < 3)
			{
				if (elements[i][l] != elements[j][l])
					return (0);
				l++;
			}			
			j++;
		}
		i++;
	}
    return (1);
}
