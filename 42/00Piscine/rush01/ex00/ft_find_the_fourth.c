/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_the_fourth.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaball <jocaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:01:02 by jocaball          #+#    #+#             */
/*   Updated: 2023/02/12 18:25:41 by jocaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_find_the_fourth_col(char matrix[6][6])
{
	int	col;
	int	row;
	int	sum;

	col = 1;
	while (col <= 4)
	{
		row = 1;
		sum = 0;
		while (row <= 4)
		{
			sum += matrix[row][col] - '0';
			row++;
		}
		if ((sum >= 6) && (sum <= 9))
		row = 1;
		while (row <= 4)
		{
			if (matrix[row][col] == '0')
			{
				sum = 10 - sum;
				matrix[row][col] = sum + '0';
			}
			row++;
		}
		col++;
	}
}	

void	ft_find_the_fourth_row(char matrix[6][6])
{
	int	col;
	int	row;
	int	sum;

	row = 1;
	while (row <= 4)
	{
		col = 1;
		sum = 0;
		while (col <= 4)
		{
			sum += matrix[row][col] - '0';
			col++;
		}
		if ((sum >= 6) && (sum <= 9))
		col = 1;
		while (col <= 4)
		{
			if (matrix[row][col] == '0')
			{
				sum = 10 - sum;
				matrix[row][col] = sum + '0';
			}
			col++;
		}
		row++;
	}
}
