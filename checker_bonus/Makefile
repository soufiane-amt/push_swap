NAME = checker
CC = gcc
FLAGS = -Wall -Wextra -Werror

L_SRC = ${addprefix ft_lst/,ft_lstadd_back	ft_lstadd_front	ft_lstclear \
			ft_lstdelete_last ft_lstdelete_top ft_lstdelone ft_lstiter \
			ft_lstlast ft_lstnew ft_lstprint ft_lstsize fill_list ft_get_prelast}

A_SRC = ${addprefix instructions/Actions/,bottom_to_top swap_top top_to_bottom send_to_top }

I_SRC = ${addprefix instructions/,do_sa do_ra do_rra do_rb do_sb  do_rrb\
									do_ss do_rr do_rrr do_pa do_pb}

U_SRC = ${addprefix utils/, ft_isdigit ft_is_nbr ft_memcmp ft_strlen ft_strtrim ft_atoi ft_putnbr_fd ft_putstr_fd \
							ft_strdup ft_substr ft_strjoin ft_strlcpy free_arr}

G_SRC = ${addprefix get_next_line/, get_next_line}


FILES = ${addprefix src_bonus/, checker check_error add_instr check_input exec_lst stack_is_sorted ${G_SRC} ${U_SRC} ${L_SRC} ${A_SRC} ${I_SRC}}

HEADER		= $(addprefix includes_bonus/, push_swap_checker.h)

SRC = ${FILES:=.c}

OBJ = ${SRC:.c=.o}

##Colors
MAGENTA = \033[35m
RED = \e[1;31m
YELLOW = \e[93;5;226m
CURVE = \e[33;3m
RESET =  \e[0m
GRAY	=	\e[33;2;37m

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	@printf "$(CURVE) $(MAGENTA)-Compiling files ...$(RESET)\n"
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ)
	@printf "$(YELLOW) -Executable file $(NAME) has been created.$(RESET)\n"

%.o: %.c $(HEADER)
	@$(CC) -c $< -o $@
	@printf "$(CURVE)$(GRAY) -Generating object file $(notdir $@) from $(notdir $<)$(RESET)\n"

clean :
	@printf "$(RED)-Deleting $(notdir $(OBJ))$(RESET)\n"
	@rm -rf $(OBJ)

fclean : clean
	@printf "$(RED)-Deleting $(NAME)$(RESET)\n"
	@rm -rf $(NAME)

re : fclean all