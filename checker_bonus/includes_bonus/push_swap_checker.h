/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_checker.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:48:52 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 15:19:36 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_CHECKER_H
# define PUSH_SWAP_CHECKER_H

# include "../src_bonus/get_next_line/get_next_line.h"
# include <limits.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}				t_list;

typedef struct s_data
{
	t_list	**stack_a;
	t_list	**stack_b;
	t_list	**instructions;
	char	**arr;
}				t_data;

int		check_mov(int argc, char **argv);
int		exec_instract(t_data *data);
char	*get_next_line(int fd);
int		istruction_is_correct(char *str);
int		add_instr(t_data *data);
int		search_instruct(char *str, t_data *data);
int		exec_lst(t_data *data);

//utils
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *str);
char	*ft_strtrim(char const *s1, char const *set);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
int		ft_isnbr(char *str);
long	ft_atoi(const char *nptr);
char	*ft_strdup(const char *s1);
int		ft_isdigit(int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
void	free_arr(char **arr);
char	**istructions_arr(t_data *data);

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

//Error Checker
int		check_error(int argc, char **argv);

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

#endif