/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finder_two_gaps_three_four_two.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebeardo <rebeardo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:28:19 by rebeardo          #+#    #+#             */
/*   Updated: 2023/02/12 22:02:32 by rebeardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_row_five(char block[6][6], int x, int y);
void	ft_row_zero(char block[6][6], int x, int y);
void	ft_col_five(char block[6][6], int x, int y);
void	ft_col_zero(char block[6][6], int x, int y);

void	ft_check_for_two(char block[6][6], int x, int y)
{
	while (++x < 5)
	{
		while (++y < 5)
		{
			if (block[x][y] == '3')
			{
				ft_row_five(block, x, y);
				ft_row_zero(block, x, y);
				ft_col_five(block, x, y);
				ft_col_zero(block, x, y);
			}
		}
	}
}

/*This function looks a 3, 4 combination and check the opposite 
value for a two*/
