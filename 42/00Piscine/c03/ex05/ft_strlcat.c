/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:45:00 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/16 11:24:08 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	total;
	unsigned int	sd;

	i = 0;
	j = 0;
	sd = 0;
	while (dest[sd])
		sd++;
	while (src[j])
		j++;
	total = sd + j + 1;
	i = sd;
	j = 0;
	while (src[j] && sd + j + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (total);
}

/*
int	main(void)
{
	char			str1[8] = "hola ";
	char			str2 [] = "que ase";
	unsigned int	size;

	size = 8;
	printf("%s-  %i", str1, ft_strlcat(str1, str2, size));
	return (0);
}
*/