/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 21:37:57 by pvilchez          #+#    #+#             */
/*   Updated: 2023/04/20 12:25:12 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	c;
	size_t	c2;

	c = 0;
	while (src[c] != '\0')
		c++;
	c2 = 0;
	while (dst[c2] != '\0')
	{
		c++;
		c2++;
	}
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	return (c);
}
