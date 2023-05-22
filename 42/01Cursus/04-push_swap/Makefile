# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/17 20:09:10 by pvilchez          #+#    #+#              #
#    Updated: 2023/05/21 23:34:42 by pvilchez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftpushswap.a

FILES = main.c push_swap.c print_lst.c\
		act_push.c act_rev.c act_rotate.c act_swap.c\
		lst_funct_01.c

OBJECTS = $(FILES:.c=.o)

LIBFT_PATH = libft/libft.a

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(LIBFT_PATH) $(OBJECTS)
	cp $(LIBFT_PATH) $(NAME)
	ar rcs $(NAME) $(OBJECTS)

$(OBJECTS): $(FILES)
	gcc $(FLAGS) -c $(FILES)

$(LIBFT_PATH):
	make -C libft/ all

clean:
	make -C libft/ clean
	rm -f $(OBJECTS)

fclean: clean
	make -C libft/ fclean
	rm -f $(NAME)

re: fclean all

main: all create fclean
	
create:	
	gcc -o zmain z_main.c libftpushswap.a

.PHONY: all clean fclean re main create