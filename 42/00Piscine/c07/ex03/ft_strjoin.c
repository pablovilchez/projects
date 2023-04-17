/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:16:40 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/23 11:27:49 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_count(int size, char **str)
{
	int	i;
	int	j;
	int	total;

	total = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j] != '\0')
			j++;
		total += j;
		i++;
	}
	return (total);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		totsize;
	char	*val;
	char	z;

	z = 'a';
	val = &z;
	i = 0;
	totsize = ft_count(size, strs);
	printf("%i", totsize);
	return (val);
}

int	main(void)
{
	char	**src;
	char	array[3];
	int		size;
	char	sep;
	char	*sepa;

	size = 3;
	array[0] = "Hola";
	array[1] = " que";
	array[2] = " ase";
	*src = &array;
	src = ft_strjoin(3, src, sepa);

	free (src);
	return (0);
}
