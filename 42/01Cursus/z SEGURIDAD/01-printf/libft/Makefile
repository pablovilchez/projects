# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 13:11:53 by pvilchez          #+#    #+#              #
#    Updated: 2023/05/06 20:40:44 by pvilchez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_atoi.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_itoa.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_split.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_striteri.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strmapi.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strtrim.c\
		ft_substr.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_lstadd_back.c\
		ft_lstadd_front.c\
		ft_lstclear.c\
		ft_lstdelone.c\
		ft_lstiter.c\
		ft_lstlast.c\
		ft_lstmap.c\
		ft_lstnew.c\
		ft_lstsize.c


OBJECTS = $(FILES:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

$(OBJECTS): $(FILES)
	gcc $(FLAGS) -c $(FILES)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus