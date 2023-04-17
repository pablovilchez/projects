/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finder_one.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebeardo <rebeardo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:28:19 by rebeardo          #+#    #+#             */
/*   Updated: 2023/02/12 17:11:48 by rebeardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_find_one(char block[6][6], int x, int y)
{
	while (x < 6)
	{
		while ((y >= 0) && (y < 6))
		{
			if (block[0][y] == '1')
				block[1][y] = '4';
			if (block[5][y] == '1')
				block[4][y] = '4';
			while (x < 6)
			{
				if (block[x][0] == '1')
					block[x][1] = '4';
				if (block[x][5] == '1')
					block[x][4] = '4';
				x++;
			}
			y++;
		}
		x++;
	}
}

//This function looks for 1's in the input.
