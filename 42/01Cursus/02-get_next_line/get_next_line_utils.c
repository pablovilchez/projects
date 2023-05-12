/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:13:47 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/12 13:33:19 by pvilchez         ###   ########.fr       */
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

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*dest;

	dest = (char *)ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(char));
	if (dest == NULL)
		return (NULL);
	dest = ft_memcpy(dest, s1, ft_strlen(s1));
	ft_memcpy(&dest[ft_strlen(s1)], s2, ft_strlen(s2));
	return (dest);
}
