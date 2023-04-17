/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 23:48:41 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/14 21:40:12 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*(src + i) != '\0' && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = 0;
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	src[] = "Holaholahola";
	char	dest[] = "Mañani";

	ft_strncpy(dest, src, 10);
	printf("%s\n%s", dest, src);
	return (0);
}
*/