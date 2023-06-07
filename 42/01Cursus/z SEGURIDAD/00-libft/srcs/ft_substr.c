/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 21:11:08 by pvilchez          #+#    #+#             */
/*   Updated: 2023/06/06 23:01:00 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_substr(const char *src, unsigned int start, size_t len)
{
	char	*dest;
	size_t	s;

	if (ft_strlen(src) <= start)
	{
		dest = (char *)ft_calloc(1, sizeof(char));
		return (dest);
	}
	s = ft_strlen(src) - start;
	if (len < s)
		s = len;
	dest = (char *)ft_calloc(s + 1, sizeof(char));
	if (dest == NULL)
		return (NULL);
	return ((char *)ft_memcpy(dest, &src[start], s));
}
