/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 23:38:00 by pvilchez          #+#    #+#             */
/*   Updated: 2023/06/02 19:14:23 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	find_nl(char *str)
{
	size_t	i;
	size_t	found;

	i = 0;
	found = 0;
	if (str)
	{
		while (str[i] && found == 0)
		{
			if (str[i] == '\n')
				found = 1;
			i++;
		}
	}
	return (found);
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
		str_aux = (char *)ft_calloc(len + 1, sizeof(char));
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
	line = (char *)ft_calloc(len + 2, sizeof(char));
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

	num_bytes = 1;
	if (!static_str)
		static_str = (char *)ft_calloc(1, sizeof(char));
	buffer = (char *)ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	while (num_bytes > 0)
	{
		if (read(fd, 0, 0) == -1 || find_nl(static_str) == 1)
			break ;
		num_bytes = read(fd, buffer, BUFFER_SIZE);
		buffer[num_bytes] = '\0';
		if (buffer[0] != '\0')
			static_str = ft_strjoin(static_str, buffer);
	}
	free(buffer);
	if (static_str && static_str[0] == 0)
	{
		free(static_str);
		return (NULL);
	}
	return (static_str);
}

char	*get_next_line(int fd)
{
	static char	*static_str[1024];
	char		*line;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free(static_str[fd]);
		static_str[fd] = NULL;
		return (0);
	}
	static_str[fd] = file_to_static(fd, static_str[fd]);
	line = line_to_print(static_str[fd], line);
	static_str[fd] = extra_data(static_str[fd]);
	return (line);
}
