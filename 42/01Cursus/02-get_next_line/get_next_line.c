/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:01:42 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/12 13:43:05 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#define BUFFER_SIZE 5

char	*buffer_to_static(char *static_str, char *buffer)
{
	char	*str_aux;

	str_aux = static_str;
	free(static_str);
	static_str = ft_strjoin(static_str, buffer);
	return (static_str);
}

char	*file_to_static(int fd, char *static_str)
{
	int		num_bytes;
	char	*buffer;

	if (!static_str)
		static_str = ft_calloc(1, sizeof(char));
	num_bytes = 1;
	buffer = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	while (num_bytes > 0)
	{
		if (read(fd, 0, 0) == -1)
		{
			return (0);
		}
		num_bytes = read(fd, buffer, BUFFER_SIZE);
		buffer[num_bytes] = '\0';
		static_str = buffer_to_static(static_str, buffer);
	}
	free(buffer);
	return (static_str);
}

char	*get_next_line(int fd)
{
	static char	*static_str;
	char		*line;

	static_str = file_to_static(fd, static_str);
	return (line);
}
