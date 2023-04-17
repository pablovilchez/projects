/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finder_gaps_three_four_three.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebeardo <rebeardo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:28:19 by rebeardo          #+#    #+#             */
/*   Updated: 2023/02/12 22:29:26 by rebeardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_row_five_three(char block[6][6], int x, int y);
void	ft_row_zero_three(char block[6][6], int x, int y);
void	ft_col_five_three(char block[6][6], int x, int y);
void	ft_col_zero_three(char block[6][6], int x, int y);

void	ft_check_for_three(char block[6][6], int x, int y)
{
	while (++x < 5)
	{
		if ((block[x][1] == '3') && (block[x][2] == '4'))
			ft_col_zero_three(block, x, y);
		if ((block[x][4] == '3') && (block[x][3] == '4'))
			ft_col_five_three(block, x, y);
	}
	while (++y < 5)
	{
		if ((block[1][y] == '3') && (block[2][y] == '4'))
			ft_row_zero_three(block, x, y);
		if ((block[4][y] == '3') && (block[3][y] == '4'))
			ft_row_five_three(block, x, y);
	}
}

/*This function looks a 3, 4 combination and check the opposite 
value for a two*/
