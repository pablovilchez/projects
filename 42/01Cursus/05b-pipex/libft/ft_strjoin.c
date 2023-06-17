/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 09:47:26 by pvilchez          #+#    #+#             */
/*   Updated: 2023/04/24 21:26:49 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
