/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:01:42 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/13 22:07:57 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	find_nl(char *buffer)
{
	size_t	i;
	size_t	found;

	i = 0;
	found = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			found = 1;
		i++;
	}
	return (found);
}

char	*file_to_static(int fd, char *static_str)
{
	int		num_bytes;
	char	*buffer;
	size_t	nl;

	nl = 0;
	if (!static_str)
		static_str = ft_calloc(1, sizeof(char));
	num_bytes = 1;
	buffer = (char *)ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	while (num_bytes > 0 && nl == 0)
	{
		if (read(fd, 0, 0) == -1)
		{
			free(static_str);
			free(buffer);
			return (NULL);
		}
		num_bytes = read(fd, buffer, BUFFER_SIZE);
		buffer[num_bytes] = '\0';
		nl = find_nl(buffer);
		static_str = ft_strjoin_endline(static_str, buffer);
	}
	free(buffer);
	return (static_str);
}

char	*line_to_print(char *static_str, char *line)
{
	size_t	len;

	if (static_str == NULL || static_str == NULL)
		return (NULL);
	len = len_end(static_str);
	line = (char *)calloc(len + 1, sizeof(char));
	if (line == NULL)
		return (NULL);
	line = ft_memcpy(line, static_str, len);
	line[len] = '\0';
	return (line);
}

char	*extra_data(char *static_str)
{
	char	*str_aux;
	char	*aux;
	size_t	len;

	len = ft_strlen(static_str) - len_end(static_str);
	str_aux = calloc(len, sizeof(char));
	aux = &static_str[len_end(static_str) + 1];
	str_aux = ft_memcpy(str_aux, aux, len);
	str_aux[len] = '\0';
	free(static_str);
	static_str = str_aux;
	return (static_str);
}

char	*get_next_line(int fd)
{
	static char	*static_str;
	char		*line;

	line = NULL;
	static_str = NULL;
	static_str = file_to_static(fd, static_str);
	line = line_to_print(static_str, line);
	static_str = extra_data(static_str);
	return (line);
}
