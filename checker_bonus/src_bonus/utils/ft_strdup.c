/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:50:15 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 16:38:41 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes_bonus/push_swap_checker.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;

	i = -1;
	if (!s1)
		return (NULL);
	str = (char *) malloc (sizeof(char) * (ft_strlen(s1) + 1));
	if (!str)
		exit(1);
	while (s1[++i])
		str[i] = s1[i];
	str[i] = 0;
	return (str);
}
/*
#include <stdio.h>
int main ()
{
	 char name [] = "soufiane";
	printf("%s  || %zu",ft_strdup(name),ft_strlen(ft_strdup(name)));
}
*/
