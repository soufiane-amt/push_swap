/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:32:08 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 18:29:43 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//Headers
# include <stdio.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

//structors
typedef struct s_list
{
	int				content;
	struct s_list	*next;
}				t_list;

//Linked list fuctions
t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst);
void	ft_lstclear(t_list **lst);
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstprint(t_list *lst);
int		ft_lstdelete_top(t_list **stack_A);
int		ft_lstdelete_last(t_list **stack_A);
t_list	**fill_lst(int argc, char **argv);
t_list	*ft_get_prelast(t_list **stack);

//Stack functions
int		swap_top(t_list **stack_A);
int		top_to_bottom(t_list **stack_A);
int		bottom_to_top(t_list **stack_A);
int		send_to_top(t_list **src, t_list **dst);
int		stack_a_is_sorted(t_list **stack);

//Operators
int		do_sa(t_list **stack_A);
int		do_rra(t_list **stack_A);
int		do_ra(t_list **stack_A);
int		do_sb(t_list **stack_B);
int		do_rrb(t_list **stack_B);
int		do_rb(t_list **stack_B);
int		do_ss(t_list **stack_A, t_list **stack_B);
int		do_rr(t_list **stack_A, t_list **stack_B);
int		do_rrr(t_list **stack_A, t_list **stack_B);
int		do_pa(t_list **stack_A, t_list **stack_B);
int		do_pb(t_list **stack_A, t_list **stack_B);

//utils
void	ft_putnbr_fd(int n, int fd);
long	ft_atoi(const char *nptr);
int		ft_isdigit(int c);
int		ft_isnbr(char *str);
size_t	ft_strlen(const char *str);
void	ft_putstr_fd(char *s, int fd);
int		factorial(int n);
int		*fill_arr(int argc, char **argv);
void	sort_arr(int argc, int *arr);
int		ft_binarynbr_len(int nbr);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

//Error Checker
int		check_error(int argc, char **argv);

//Algorithms
int		possibilities(t_list **stack);
int		top_nbr(t_list **stack);
int		bottom_nbr(t_list **stack);
int		middle_nbr(t_list **stack);
void	sort_three(t_list **stack);
void	sort_four_and_five(t_list **stack_A, t_list **stack_B);
void	sort_largest_stack(t_list **st_A, t_list **st_B, int argc, char **argv);
void	substitute_stack(t_list **stack_A, int argc, char **argv);
void	radix_sort(t_list **stack_A, t_list **stack_B);

//Push Swap functions
void	sort_elements(int argc, char **argv);

#endif