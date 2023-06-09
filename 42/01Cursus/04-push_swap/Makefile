# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/17 20:09:10 by pvilchez          #+#    #+#              #
#    Updated: 2023/06/09 22:16:22 by pvilchez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftpushswap.a

FILES = push_swap.c push_swap_test.c lst_actions.c error_arg_check.c\
		lst_print_stacks.c lst_print_structs.c lst_fill_stats.c lst_sort_plus.c\
		lst_fill_index.c lst_sort_plus_aux.c main.c

OBJECTS = $(FILES:.c=.o)

LIBFT_PATH = libft/libft.a

FLAGS = -Wall -Wextra -Werror

all: $(NAME)
	gcc $(FLAGS) -o push_swap $(NAME)

$(NAME): $(LIBFT_PATH) $(OBJECTS)
	cp $(LIBFT_PATH) $(NAME)
	ar rcs $(NAME) $(OBJECTS)

$(OBJECTS): $(FILES)
	gcc $(FLAGS) -c $(FILES)

$(LIBFT_PATH):
	make -C libft/ all

clean:
	make -C libft/ clean
	rm -f $(addprefix $(OBJ_DIR)/, $(OBJECTS))

fclean:
	make -C libft/ fclean
	rm -f $(addprefix $(OBJ_DIR)/, $(OBJECTS))
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re main create exe