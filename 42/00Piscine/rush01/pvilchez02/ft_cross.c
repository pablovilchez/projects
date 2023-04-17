/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cross.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 21:33:21 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/12 22:55:13 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_print_cross(char matrix[6][6], int vec[6])
{
	if (vec[0] + vec[1] + vec[2] + vec[3] == 3)
	{
		if (vec[0] == 0)
			matrix[vec[4]][vec[5]] = 1 + '0';
		if (vec[1] == 0)
			matrix[vec[4]][vec[5]] = 2 + '0';
		if (vec[2] == 0)
			matrix[vec[4]][vec[5]] = 3 + '0';
		if (vec[3] == 0)
			matrix[vec[4]][vec[5]] = 4 + '0';
	}
}

void	check_cross(char matrix[6][6], int i, int j)
{
	int	x;
	int	y;
	int	find[6];

	find[0] = 0;
	find[1] = 0;
	find[2] = 0;
	find[3] = 0;
	find[4] = i;
	find[5] = j;
	y = 1;
	while (y <= 4)
	{
		if (matrix[i][y] != '0')
			find[(matrix[i][y] - '0') - 1] = 1;
		y++;
	}
	x = 1;
	while (x <= 4)
	{
		if (matrix[x][j] != '0')
			find[(matrix[x][j] - '0') - 1] = 1;
		x++;
	}
	ft_print_cross(matrix, find);
}

void	ft_cross(char matrix[6][6])
{
	int	i;
	int	j;

	i = 1;
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			if (matrix[i][j] == '0')
				check_cross(matrix, i, j);
			j++;
		}
		i++;
	}
}
