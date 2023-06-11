/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:01:42 by pvilchez          #+#    #+#             */
/*   Updated: 2023/06/09 21:52:05 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	find_nl(char *str)
{
	while (*str)
	{
		if (*str == '\n')
			return (1);
		str++;
	}
	return (0);
}

char	*extra_data(char *static_str)
{
	char	*str_aux;
	char	*aux;
	size_t	len;

	str_aux = NULL;
	if (static_str == NULL)
		return (NULL);
	len = ft_strlen(static_str) - count_nl(static_str);
	if (len > 0)
	{
		str_aux = (char *)ft_calloc_gnl(len + 1, sizeof(char));
		if (str_aux == NULL)
		{
			free(static_str);
			return (NULL);
		}
		aux = &static_str[count_nl(static_str)];
		str_aux = (char *)ft_memcpy(str_aux, aux, len);
	}
	free(static_str);
	return (str_aux);
}

char	*line_to_print(char *static_str, char *line)
{
	size_t	len;

	if (static_str == NULL)
		return (0);
	if (find_nl(static_str) == 1)
		len = count_nl(static_str);
	else
		len = ft_strlen(static_str);
	line = (char *)ft_calloc_gnl(len + 2, sizeof(char));
	if (line == NULL)
		return (NULL);
	ft_memcpy(line, static_str, len);
	line[len] = '\0';
	return (line);
}

char	*file_to_static(int fd, char *static_str)
{
	int		num_bytes;
	char	*buffer;

	buffer = (char *)ft_calloc_gnl((BUFFER_SIZE + 1), sizeof(char));
	num_bytes = 1;
	while (num_bytes > 0 && !(read(fd, 0, 0) == -1 || find_nl(static_str)))
	{
		num_bytes = read(fd, buffer, BUFFER_SIZE);
		buffer[num_bytes] = '\0';
		if (buffer[0] != '\0')
			static_str = ft_strjoin_gnl(static_str, buffer);
	}
	free(buffer);
	if (static_str && static_str[0] == 0)
	{
		free(static_str);
		return (NULL);
	}
	return (static_str);
}

char	*ft_get_next_line(int fd)
{
	static char	*static_str;
	char		*line;

	line = NULL;
	if (!static_str)
		static_str = (char *)ft_calloc_gnl(1, sizeof(char));
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free(static_str);
		static_str = NULL;
		return (line);
	}
	static_str = file_to_static(fd, static_str);
	line = line_to_print(static_str, line);
	static_str = extra_data(static_str);
	return (line);
}
