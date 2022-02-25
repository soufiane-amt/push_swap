/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:08:03 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 18:29:05 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_list	**fill_lst(int argc, char **argv)
{
	t_list	**stack_a;
	int		i;

	i = 1;
	stack_a = (t_list **) malloc (sizeof(t_list *));
	if (!stack_a)
		exit(1);
	*stack_a = NULL;
	while (i < argc)
	{
		if (ft_memcmp("", argv[i], ft_strlen (argv[i])))
			ft_lstadd_back (stack_a, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}
	return (stack_a);
}
