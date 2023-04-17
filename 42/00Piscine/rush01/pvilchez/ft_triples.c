/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_triples.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:28:22 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/12 18:49:28 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_triples(char matriz[6][6])
{
	char	i;

	i = '1';
	while (i < '5')
	{
		ft_find_line(matriz, i);
		i++;
	}
}
