/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:07:07 by pvilchez          #+#    #+#             */
/*   Updated: 2023/04/26 18:43:08 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*str;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	str = ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = (f)(i, s[i]);
		i++;
	}
	return (str);
}
