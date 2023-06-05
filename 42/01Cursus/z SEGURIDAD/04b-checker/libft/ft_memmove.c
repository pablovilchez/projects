/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:06:04 by pvilchez          #+#    #+#             */
/*   Updated: 2023/04/22 11:18:26 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	if (src == NULL && dest == NULL)
		return (0);
	d = (char *)dest;
	s = (char *)src;
	i = 0;
	if (d > s)
		while (n-- != 0)
			d[n] = s[n];
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

/*
int	main(void)
{
	char	str1[] = "Esta es la cadena origen";
	char	str2[] = "Cadena destino";

 	printf("Antes de memmove: %s\n", str2);
 	ft_memmove(str2, str1, 5);
 	printf("Despúes de memmove: %s\n", str2);

 	return (0);
}
*/