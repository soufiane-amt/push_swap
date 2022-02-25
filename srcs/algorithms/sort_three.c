/* ************************************************************************** */
/*										                                    */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:22:57 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 14:17:29 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	top_nbr(t_list **stack)
{
	t_list	*temp;
	int		largest;

	temp = *stack;
	largest = temp -> content;
	while (temp)
	{			
		if (largest < temp->content)
			largest = temp->content;
		temp = temp->next;
	}
	return (largest);
}

int	bottom_nbr(t_list **stack)
{
	t_list	*temp;
	int		smallest;

	temp = *stack;
	smallest = temp -> content;
	while (temp)
	{			
		if (smallest > temp->content)
			smallest = temp->content;
		temp = temp->next;
	}
	return (smallest);
}

int	middle_nbr(t_list **stack)
{
	t_list	*temp;
	int		largest;
	int		smallest;

	largest = top_nbr(stack);
	smallest = bottom_nbr (stack);
	temp = *stack;
	while (temp)
	{			
		if (temp ->content != smallest && temp -> content != largest)
			return (temp->content);
		temp = temp->next;
	}
	return (0);
}

void	sort_three(t_list **stack)
{
	int	largest;
	int	medium;
	int	smallest;

	largest = top_nbr(stack);
	medium = middle_nbr(stack);
	smallest = bottom_nbr(stack);
	while (!(stack_a_is_sorted (stack)))
	{
		if ((*stack)->content == medium && (*stack)->next->content == smallest)
			do_sa(stack);
		else if ((*stack)->content == largest
			&& (*stack)->next->content == smallest)
			do_ra(stack);
		else if ((*stack)->content == largest
			&& (*stack)->next->content == medium)
			do_sa(stack);
		else if ((*stack)->content == smallest
			&& (*stack)-> next->content == largest)
			do_sa (stack);
		else
			do_rra(stack);
	}
}
