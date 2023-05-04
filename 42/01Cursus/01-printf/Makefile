# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/27 23:27:09 by pvilchez          #+#    #+#              #
#    Updated: 2023/05/04 21:21:07 by pvilchez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FILES = ft_itoa_long.c\
		ft_printf.c\
		print_hex_cap.c\
		print_hex.c\
		print_int.c\
		print_str.c\
		print_unsig_int.c\
		print_void.c

OBJECTS = $(FILES:.c=.o)

LIBFT = ./libft/libft.a

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(LIBFT) $(OBJECTS)
	@cp $(LIBFT) $(NAME)
	@ar rcs $(NAME) $(OBJECTS)

$(OBJECTS): $(FILES)
	@gcc $(FLAGS) -c $(FILES)

$(LIBFT):
	@make -C ./libft all

clean:
	@make -C ./libft clean
	@rm -f $(OBJECTS)

fclean:
	@make -C ./libft fclean
	@rm -f $(NAME) $(OBJECTS)

re: fclean all

main: all create fclean
	
create:	
	@gcc -o zmain z_main.c libftprintf.a

.PHONY: all clean fclean re main create