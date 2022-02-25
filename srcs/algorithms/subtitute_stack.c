/* ************************************************************************** */
/*	                                                                        */
/*                                                        :::      ::::::::   */
/*   subtitute_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:43:09 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 14:31:11 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	search_index(int content, int *arr, int argc)
{
	int	i;

	i = 0;
	while (i < argc - 1)
	{
		if (arr[i] == content)
			return (i);
		i++;
	}
	return (-1);
}

void	substitute_stack(t_list **stack_A, int argc, char **argv)
{
	int	*arr;
	int	i;
	int	index;

	i = 0;
	arr = fill_arr (argc, argv);
	sort_arr(argc, arr);
	while (i < argc - 1)
	{
		index = search_index((*stack_A)->content, arr, argc);
		if (index != -1)
		{
			ft_lstdelete_top (stack_A);
			ft_lstadd_front (stack_A, ft_lstnew (index + 1));
			top_to_bottom (stack_A);
		}
		i++;
	}
	free(arr);
}
