/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_triples.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:28:22 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/12 18:45:14 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print(char src[6][6])
{
	int	i;
	int	j;

	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			printf("%c ", src[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}
}

void	ft_sust_trip(char src[6][6], int line, char num)
{
	int	i;
	int	j;
	int	count;
	int	count2;
	int	col;

	i = 1;
	count = 0;
	count2 = 0;
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			if (src[j][i] == num)
				count++;
			j++;
		}
		if (count == count2)
			col = i;
		count2 = count;
		i++;
	}
	src[line][col] = num;
}

void	ft_find_line(char src[6][6], char num)
{
	int	i;
	int	j;
	int	count;
	int	count2;
	int	line;

	i = 1;
	count = 0;
	count2 = 0;
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			if (src[i][j] == num)
				count++;
			j++;
		}
		if (count == count2)
			line = i;
		count2 = count;
		i++;
	}
	if (count == 3)
		ft_sust_trip(src, line, num);
}

void	ft_triples(char matriz[][])
{
	char	i;
	char matriz[6][6] = {{'0', '2', '3', '1', '3', '0'},
						{'2', '0', '0', '4', '0', '2'},
						{'1', '4', '0', '3', '0', '3'},
						{'2', '3', '0', '0', '0', '2'},
						{'3', '0', '3', '0', '4', '1'},
						{'0', '3', '2', '3', '1', '0'}};

	ft_print(matriz);
	i = '1';
	while (i < '5')
	{
		ft_find_line(matriz, i);
		i++;
	}
	printf("\n");
	ft_print(matriz);
	return (0);
}
