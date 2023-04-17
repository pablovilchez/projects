/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finder_four.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebeardo <rebeardo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:28:19 by rebeardo          #+#    #+#             */
/*   Updated: 2023/02/12 17:13:35 by rebeardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	find_four_up(char block[6][6], int x, int y);
void	find_four_down(char block[6][6], int x, int y);
void	find_four_left(char block[6][6], int x, int y);
void	find_four_right(char block[6][6], int x, int y);

void	ft_find_four(char block[6][6], int x, int y)
{
	while (x < 6)
	{
		while ((y >= 0) && (y < 5))
		{
			if (block[0][y] == '4')
				find_four_up(block, 0, y);
			if ((x > 0) && (x < 6))
			{
				while (x < 6)
				{
					if (block[x][0] == '4')
						find_four_left(block, x, 0);
					if (block[x][5] == '4')
						find_four_right(block, x, 5);
					x++;
				}
			}
			if (block[5][y] == '4')
				find_four_down(block, 5, y);
			y++;
		}
		x++;
		y = 0;
	}
}

//This function looks for 4's in the input.
