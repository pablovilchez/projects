/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:22:47 by pvilchez          #+#    #+#             */
/*   Updated: 2023/04/25 10:09:01 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	l;

	l = 0;
	i = 0;
	if (ft_strlen(s1) > 0)
		l = ft_strlen(s1) - 1;
	if (s1[i] == '\0')
		return ((char *)ft_calloc(1, sizeof(char)));
	while (ft_strchr(set, s1[i]) && s1[i] != '\0')
		i++;
	while (ft_strchr(set, s1[l]) && l > i)
		l--;
	l++;
	if (l - i)
		str = (char *)ft_calloc(l - i + 1, sizeof(char));
	else
		return ((char *)ft_calloc(1, sizeof(char)));
	if (str == NULL)
		return (NULL);
	str = (char *)ft_memcpy(str, &s1[i], l - i);
	return (str);
}
