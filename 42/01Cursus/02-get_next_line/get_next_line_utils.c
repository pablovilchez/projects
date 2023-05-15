/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:13:47 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/15 20:01:28 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t number, size_t size)
{
	unsigned char	*c;
	size_t			i;

	c = (unsigned char *)malloc(number * size);
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

char	*ft_strjoin(char *s1, char *s2)
{
	char	*dest;

	if (s1 == NULL || s2 == NULL || s2[0] == '\0')
		return (NULL);
	dest = (char *)ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, s1, ft_strlen(s1));
	ft_memcpy(&dest[ft_strlen(s1)], s2, ft_strlen(s2));
	free(s1);
	return (dest);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
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

size_t	count_nl(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	return (i);
}
