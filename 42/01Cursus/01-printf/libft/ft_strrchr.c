/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 13:36:16 by pvilchez          #+#    #+#             */
/*   Updated: 2023/04/22 14:07:59 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *str, int c)
{
	char	ch;
	char	*p;
	char	*res;
	size_t	i;

	i = 0;
	p = (char *)str;
	ch = (char)c;
	res = NULL;
	while (p[i])
	{
		if (p[i] == ch)
			res = &p[i];
		i++;
	}
	if (res != NULL)
		return (res);
	if (ch == '\0')
		return (&p[i]);
	return (NULL);
}
