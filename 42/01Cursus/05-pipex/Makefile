# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/17 20:09:10 by pvilchez          #+#    #+#              #
#    Updated: 2023/06/10 00:33:57 by pvilchez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftpipex.a

FILES = main.c pipex.c

OBJECTS = $(FILES:.c=.o)

LIBFT_PATH = libft/libft.a

FLAGS = -Wall -Wextra -Werror

all: $(NAME)
	gcc $(FLAGS) -o pipex main.c $(NAME)

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

fclean:
	make -C libft/ fclean
	rm -f $(OBJECTS)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re main create exe