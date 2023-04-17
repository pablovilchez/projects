/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:06:38 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/23 11:10:06 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*range2;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	range2 = (int *)malloc((max - min) * 4);
	if (range2 == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		range2[i] = min;
		i++;
		min++;
	}
	*range = range2;
	return (i);
}

/*
int	main(void)
{
	int	**src;
	int	i;
	int	min;
	int	max;

	src = NULL;
	min = 9;
	max = 13;
	i = ft_ultimate_range(src, min, max);
	printf("%i ", i);
	free (src);
	return (0);
}
*/