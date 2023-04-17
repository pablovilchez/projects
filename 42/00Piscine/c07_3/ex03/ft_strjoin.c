/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:16:40 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/23 12:08:19 by pvilchez         ###   ########.fr       */
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
		{	
			total++;
			j++;
		}
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
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
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
	int		j;
	int		totsize;
	char	*val;

	if (size > 0)
	{
		j = 0;
		while (sep[j])
			j++;
		totsize = ft_count(size, strs);
		val = (char *)malloc((totsize + (size * j)) * 1);
		i = 0;
		while (i < size)
		{
			val = ft_strcat(val, strs[i]);
			i++;
			if (i <= size - 1)
				val = ft_strcat(val, sep);
		}
		return (val);
	}
	val = (char *)malloc(1);
	val = ft_strcat(val, "\0");
	return (val);
}

/*
int	main(void)
{
	char	**src;
	char	*res;
	char	array[5][10] = {"hola", "que", "ase", "aqui", "tú"};
	int		size;
	char	separ[] = "$$$";
	int		i;

	size = 5;
	src = malloc(size * sizeof(char *));
	i = 0;
	while (i < size)
	{
		src[i] = array[i];
		i++;
	}
	res = ft_strjoin(size, src, separ);
	i = 0;
	while (res[i])
	{
		printf("%c", res[i]);
		i++;
	}
	free (src);
	return (0);
}
*/