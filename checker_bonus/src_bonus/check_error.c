/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:44:29 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 15:15:39 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes_bonus/push_swap_checker.h"

int	nbr_is_int(char *str)
{
	long	nbr;

	nbr = ft_atoi(str);
	if (nbr < INT_MIN || nbr > INT_MAX)
		return (0);
	return (1);
}

int	check_double(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_error(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 3 || !check_double (argc, argv))
		return (0);
	while (i < argc)
	{
		if (!ft_isnbr (argv[i]) || !nbr_is_int (argv[i]))
			return (0);
		i++;
	}
	return (1);
}
