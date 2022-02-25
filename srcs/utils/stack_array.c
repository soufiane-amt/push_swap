/* ************************************************************************** */
/*		                                                                    */
/*                                                        :::      ::::::::   */
/*   stack_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:37:14 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 14:49:45 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_arr(int argc, int *arr)
{
	int	i;
	int	j;
	int	s;

	i = 0;
	j = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (j < argc - 2)
		{
			if (arr[j] > arr[j + 1])
			{
				s = arr[j + 1];
				arr[j + 1] = arr [j];
				arr[j] = s;
			}
			j++;
		}
		i++;
	}
}

int	*fill_arr(int argc, char **argv)
{
	int		*arr;
	int		i;

	arr = (int *) malloc (sizeof (int) * (argc - 1));
	if (!arr)
		return (0);
	i = 0;
	while (i < argc - 1)
	{
		arr[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	return (arr);
}
