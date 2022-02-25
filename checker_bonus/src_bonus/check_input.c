/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:16:06 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 16:36:31 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes_bonus/push_swap_checker.h"

char	**istructions_arr(t_data *data)
{
	int	i;

	i = 0;
	data -> arr = (char **)malloc (sizeof(char *) * 12);
	if (!data -> arr)
		exit (1);
	data -> arr[0] = ft_strdup("sa");
	data -> arr[1] = ft_strdup ("sb");
	data -> arr[2] = ft_strdup ("ss");
	data -> arr[3] = ft_strdup ("pa");
	data -> arr[4] = ft_strdup ("pb");
	data -> arr[5] = ft_strdup ("ra");
	data -> arr[6] = ft_strdup ("rb");
	data -> arr[7] = ft_strdup ("rr");
	data -> arr[8] = ft_strdup ("rra");
	data -> arr[9] = ft_strdup ("rrb");
	data -> arr[10] = ft_strdup ("rrr");
	data -> arr[11] = NULL;
	return (data -> arr);
}

int	search_instruct(char *str, t_data *data)
{
	int		i;
	int		str_size;

	i = 0;
	str_size = ft_strlen(str);
	if (str_size < 2)
		return (-1);
	while (data -> arr[i])
	{
		if (!ft_memcmp (data -> arr[i], str, str_size))
			return (i);
		i++;
	}
	return (-1);
}

//if the instruction is correct 
//the function returns its index in the array of instructions
//Otherwise the function returns a negative number