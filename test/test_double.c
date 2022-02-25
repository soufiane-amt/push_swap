/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_double.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 18:56:28 by samajat           #+#    #+#             */
/*   Updated: 2022/02/13 20:00:22 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int Check_lst (int **lst)
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
				if (lst[i][l] != lst[j][l])
					return (0);
				l++;
			}			
			j++;
		}
		i++;
	}
    return (1);
}

int main ()
{
    int **lst;
    int a[] = {1,2,3};
    int b[] = {1,2,3};
    int c[] = {1,2,3};
    int aa;


    lst = (int **) malloc (sizeof(int *) * 3);
    lst[0] = a;
    lst[1] = b;
    lst[2] = c;
    printf ("\n******%d", Check_lst(lst));

}