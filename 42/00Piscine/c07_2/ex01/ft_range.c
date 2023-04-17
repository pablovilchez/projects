/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:26:21 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/22 16:47:28 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;

	if (min >= max)
		return (0);
	dest = (int *)malloc((max - min) * 4);
	if (dest == NULL)
		return (dest);
	i = 0;
	while (min < max)
	{
		dest[i] = min;
		i++;
		min++;
	}
	return (dest);
}

/*
int	main(void)
{
	int	*res;
	int	i;
	int	x;
	int	y;

	x = 3;
	y = 13;
	res = ft_range(x, y);
	i = 0;
	while (i < y - x)
	{
		printf("%i ", res[i]);
		i++;
	}
	free (res);
}
*/