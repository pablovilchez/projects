/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_the_fourth.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaball <jocaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:01:02 by jocaball          #+#    #+#             */
/*   Updated: 2023/02/12 20:49:00 by jocaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_find_the_fourth_col(char matrix[6][6], int col, int row)
{
	int	sum;
	int	empty_row;
	int	count;

	while (++col <= 4)
	{
		row = 0;
		sum = 0;
		count = 0;
		empty_row = 0;
		while (++row <= 4)
		{
			sum += matrix[row][col] - '0';
			if (matrix[row][col] == '0')
			{
				count++;
				empty_row = row;
			}
		}
		if (((sum >= 6) && (sum <= 9)) && (count == 1))
		{
			sum = 10 - sum;
			matrix[empty_row][col] = sum + '0';
		}
	}
}

void	ft_find_the_fourth_row(char matrix[6][6], int col, int row)
{
	int	sum;
	int	empty_col;
	int	count;

	while (++row <= 4)
	{
		col = 0;
		sum = 0;
		count = 0;
		empty_col = 0;
		while (++col <= 4)
		{
			sum += matrix[row][col] - '0';
			if (matrix[row][col] == '0')
			{
				count++;
				empty_col = col;
			}
		}
		if (((sum >= 6) && (sum <= 9)) && (count == 1))
		{
			sum = 10 - sum;
			matrix[empty_col][row] = sum + '0';
		}
	}
}
