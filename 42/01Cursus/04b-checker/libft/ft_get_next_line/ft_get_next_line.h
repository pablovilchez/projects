/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:02:53 by pvilchez          #+#    #+#             */
/*   Updated: 2023/06/05 22:51:05 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GET_NEXT_LINE_H
# define FT_GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 8
# endif

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char	*gnl_extra_data(char *static_str);
char	*gnl_line_to_print(char *static_str, char *line);
char	*gnl_file_to_static(int fd, char *static_str);
char	*ft_get_next_line(int fd);
void	*gnl_calloc(size_t number, size_t size);
char	*gnl_strjoin(char *s1, char *s2);
size_t	gnl_strlen(const char *str);
void	*gnl_memcpy(void *dest, const void *src, size_t n);
size_t	gnl_find_nl(char *buffer);
size_t	gnl_count_nl(char *str);

#endif