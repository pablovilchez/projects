/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 21:11:08 by pvilchez          #+#    #+#             */
/*   Updated: 2023/04/24 00:59:44 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t len)
{
	char	*dest;
	size_t	s;

	dest = NULL;
	if (ft_strlen(src) <= start)
		return (dest);
	s = ft_strlen(src) - start - 1;
	if (len < s)
		s = len;
	dest = (char *)malloc(s + 1);
	if (dest == NULL)
		return (NULL);
	return ((char *)ft_memcpy(dest, (char *)&src[start], s));
}
