/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:21:28 by pvilchez          #+#    #+#             */
/*   Updated: 2023/04/20 13:44:55 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	char	ch;
	char	*p;

	i = 0;
	ch = c;
	p = (char *)str;
	while (p)
	{
		if (*p == ch)
			return (p);
		p++;
	}
	return (NULL);
}
