/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finder_two_gaps_three_four_three.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebeardo <rebeardo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:28:19 by rebeardo          #+#    #+#             */
/*   Updated: 2023/02/12 22:22:22 by rebeardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_row_five(char block[6][6], int x, int y)
{
	if (block[2][y] == '4')
	{
		if (block[5][y] == '3')
		{
			block[3][y] = '2';
			block[4][y] = '1';
		}
	}
}

void	ft_row_zero(char block[6][6], int x, int y)
{
	if (block[3][y] == '4')
	{
		if (block[0][y] == '3')
		{
			block[2][y] = '2';
			block[1][y] = '1';
		}
	}
}

void	ft_col_five(char block[6][6], int x, int y)
{
	if (block[x][2] == '4')
	{
		if (block[x][5] == '3')
		{
			block[x][3] = '2';
			block[x][4] = '1';
		}
	}
}

void	ft_col_zero(char block[6][6], int x, int y)
{
	if (block[x][3] == '4')
	{
		if (block[x][0] == '3')
		{
			block[x][2] = '2';
			block[x][1] = '1';
		}
	}
}

//This functions check by row and column
