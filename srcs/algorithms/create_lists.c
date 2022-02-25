/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_lists.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:43:33 by samajat           #+#    #+#             */
/*   Updated: 2022/02/14 12:43:34 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int **create_double_array (int stack_size, int pos)
{
	int **odds;
	int i;
	int pos;
	int	stack_size;

	i = 0;
	odds = (int **)malloc (sizeof(int *) * pos);
	if (!odds)
		return (0);
	while (i < pos)
	{
		odds[i] = (int *) malloc (sizeof (int) * stack_size);
		if (!odds[i])
			return (0);
		i++;
	}
	return (odds);
}