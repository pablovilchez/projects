# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/27 23:27:09 by pvilchez          #+#    #+#              #
#    Updated: 2023/04/30 17:14:19 by pvilchez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FILES = ft_printf.c

OBJECTS = $(FILES:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rcs $(NAME) $(OBJECTS)

$(OBJECTS): $(FILES)
	@gcc $(FLAGS) -c $(FILES)

clean:
	@rm -f $(OBJECTS)

fclean:
	@rm -f $(NAME) $(OBJECTS)

re: fclean all

main: all create fclean
	
create:	
	@gcc -o zmain z_main.c libftprintf.a

.PHONY: all clean fclean re main create