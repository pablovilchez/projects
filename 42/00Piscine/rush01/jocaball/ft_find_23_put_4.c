/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_23_put_4.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaball <jocaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:01:02 by jocaball          #+#    #+#             */
/*   Updated: 2023/02/12 18:17:39 by jocaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_find_23_put_4(char matrix[6][6])
{
	int	col;
	int	row;

	col = 1;
	while (col <= 4)
	{
		if (matrix[0][col] == '2' && (matrix[5][col] == '3'))
			matrix[2][col] = '4';
		if (matrix[0][col] == '3' && (matrix[5][col] == '2'))
			matrix[3][col] = '4';
		col++;
	}
	row = 1;
	while (row <= 4)
	{
		if (matrix[row][0] == '2' && (matrix[row][5] == '3'))
			matrix[row][2] = '4';
		if (matrix[row][0] == '3' && (matrix[row][5] == '2'))
			matrix[row][3] = '4';
		row++;
	}
}
