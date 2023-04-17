/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:06:38 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/22 16:50:31 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	**ft_range2(int min, int max)
{
	int	*dest;
	int	**dest2;
	int	i;

	if (min >= max)
		return (0);
	dest = (int *)malloc((max - min) * 4);
	if (dest == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		dest[i] = min;
		i++;
		min++;
	}
	dest2 = (int **)malloc(2 * 4);
	dest2[0] = dest;
	dest2[1] = NULL;
	return (dest2);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	range = ft_range2(min, max);
	if (*range == NULL)
		return (-1);
	return (max - min);
}

/*
int	main(void)
{
	int	**src;
	int	i;
	int	min;
	int	max;

	src = NULL;
	min = 3;
	max = 13;
	i = ft_ultimate_range(src, min, max);
	printf("%i ", i);
	free (src);
	return (0);
}
*/