/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_4_vs_2_put_3.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaball <jocaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:01:02 by jocaball          #+#    #+#             */
/*   Updated: 2023/02/12 18:20:41 by jocaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_find_4_vs_2_put_3(char matrix[6][6])
{
	int	col;
	int	row;
	int	sum;

	row = 1;
	while (row <= 4)
	{
		if ((matrix[row][1] == '4') && (matrix[row][5] == '2'))
			matrix[row][4] = '3';
		if ((matrix[row][4] == '4') && (matrix[row][0] == '2'))
			matrix[row][1] = '3';
		row++;
	}
	col = 1;
	while (col <= 4)
	{
		if ((matrix[1][col] == '4') && (matrix[5][col] == '2'))
			matrix[4][col] = '3';
		if ((matrix[4][col] == '4') && (matrix[0][col] == '2'))
			matrix[1][col] = '3';
		col++;
	}	
}
