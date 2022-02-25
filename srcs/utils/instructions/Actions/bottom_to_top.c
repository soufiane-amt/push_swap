/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bottom_to_top.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:15:08 by samajat           #+#    #+#             */
/*   Updated: 2022/02/12 11:50:56 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

int bottom_to_top(t_list **stack_A)
{
    int last_element;

    last_element = ft_lstlast(*stack_A)->content;
    printf ("The last element : %d\n", last_element);
    if (!(ft_lstdelete_last (stack_A)))
        return (0);
    ft_lstadd_front  (stack_A, ft_lstnew(last_element));
    return (1);
}