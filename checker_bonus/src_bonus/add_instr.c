/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_instr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:45:27 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 18:28:06 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes_bonus/push_swap_checker.h"

int	add_instr(t_data *data)
{
	char	*str;
	int		index;
	char	*s;

	data -> instructions = (t_list **) malloc (sizeof(t_list *));
	if (!data ->instructions)
		exit (1);
	(*data -> instructions) = NULL;
	data -> arr = istructions_arr(data);
	while (1337)
	{
		str = get_next_line (0);
		if (!str)
			return (1);
		s = ft_strtrim(str, "\n");
		index = search_instruct (s, data);
		free (str);
		free (s);
		if (index == -1)
			return (0);
		ft_lstadd_back (data->instructions, ft_lstnew(index));
	}
	return (1);
}
