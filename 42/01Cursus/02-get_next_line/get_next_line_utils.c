/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:13:47 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/11 12:07:31 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*c;

	c = malloc(number * size);
	if (c != NULL)
		ft_memset(c, 0, number * size);
	return (c);
}

ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	c;

	c = 0;
	while (src[c])
		c++;
	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
}