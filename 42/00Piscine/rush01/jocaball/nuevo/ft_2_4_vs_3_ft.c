/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2_4_vs_3_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaball <jocaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 21:43:56 by jocaball          #+#    #+#             */
/*   Updated: 2023/02/12 22:28:31 by jocaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_2_4_vs_3_right(char matrix[6][6])
{
	int	col;
	int	row;

	row = 1;
	while (row <= 4)
	{
		if ((matrix[row][0] == '2') && (matrix[row][5] == '3'))
		{
			if ((matrix[row][1] == '3') && (matrix[row][2] == '4'))
			{
				matrix[row][3] = '2';
				matrix[row][4] = '1';
			}
			else if ((matrix[row][1] == '2') && (matrix[row][2] == '4'))
			{
				matrix[row][3] = '2';
				matrix[row][4] = '1';
			}
		}
		row++;
	}
}

void	ft_2_4_vs_3_left(char matrix[6][6])
{
	int	col;
	int	row;

	row = 1;
	while (row <= 4)
	{
		if ((matrix[row][0] == '3') && (matrix[row][5] == '2'))
		{
			if ((matrix[row][3] == '4') && (matrix[row][4] == '3'))
			{
				matrix[row][1] = '1';
				matrix[row][2] = '2';
			}
			else if ((matrix[row][3] == '4') && (matrix[row][4] == '2'))
			{
				matrix[row][1] = '2';
				matrix[row][2] = '3';
			}
		}
		row++;
	}
}

void	ft_2_4_vs_3_down(char matrix[6][6])
{
	int	col;
	int	row;

	col = 1;
	while (row <= 4)
	{
		if ((matrix[0][col] == '3') && (matrix[5][col] == '2'))
		{
			if ((matrix[3][col] == '4') && (matrix[4][col] == '3'))
			{
				matrix[1][col] = '1';
				matrix[2][col] = '2';
			}
			else if ((matrix[3][col] == '4') && (matrix[4][col] == '2'))
			{
				matrix[1][col] = '2';
				matrix[2][col] = '3';
			}
		}
		col++;
	}
}

void	ft_2_4_vs_3_up(char matrix[6][6])
{
	int	col;
	int	row;

	col = 1;
	while (row <= 4)
	{
		if ((matrix[0][col] == '2') && (matrix[5][col] == '3'))
		{
			if ((matrix[2][col] == '4') && (matrix[1][col] == '3'))
			{
				matrix[3][col] = '2';
				matrix[4][col] = '1';
			}
			else if ((matrix[2][col] == '4') && (matrix[1][col] == '2'))
			{
				matrix[3][col] = '3';
				matrix[4][col] = '1';
			}
		}
		col++;
	}
}
