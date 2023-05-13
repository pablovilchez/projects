/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:13:47 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/13 22:12:49 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t number, size_t size)
{
	unsigned char	*c;
	size_t			i;

	c = malloc(number * size);
	if (c != NULL)
	{
		i = 0;
		while (i < (number * size))
		{
			c[i] = 0;
			i++;
		}
		return (c);
	}
	return (0);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (!n || dest == src)
		return (dest);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

char	*ft_strjoin_endline(char *str, char *buffer)
{
	char	*dest;

	if (str == NULL || buffer == NULL)
		return (NULL);
	dest = ft_calloc((len_end(str) + len_end(buffer) + 1), sizeof(char));
	if (dest == NULL)
		return (NULL);
	dest = ft_memcpy(dest, str, len_end(str));
	ft_memcpy(&dest[len_end(str)], buffer, len_end(buffer));
	free(str);
	return (dest);
}

size_t	len_end(const char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i) != '\0' && *(str + i) != '\n')
	{
		i++;
	}
	if (*(str + i) == '\n')
		i++;
	return (i);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}
