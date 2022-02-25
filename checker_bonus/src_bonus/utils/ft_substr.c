/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:25:14 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 16:50:37 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes_bonus/push_swap_checker.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	i = -1;
	j = 0;
	if (len > ft_strlen(s) + 1)
		len = ft_strlen(s);
	substr = (char *) malloc (sizeof(char) * (len + 1));
	if (!substr)
		exit (1);
	while (s[++i])
	{
		if (i >= start && j < len)
		{
			substr[j] = s[i];
			j++;
		}
	}
	substr[j] = 0;
	return (substr);
}
