/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_four_finder_funct.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebeardo <rebeardo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:28:19 by rebeardo          #+#    #+#             */
/*   Updated: 2023/02/12 17:11:11 by rebeardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	find_four_up(char block[6][6], int x, int y)
{
	char	num;

	num = '1';
	while (++x <= 4)
	{
		block[x][y] = num;
		num++;
	}
}

void	find_four_down(char block[6][6], int x, int y)
{
	char	num;

	num = '1';
	while (--x >= 1)
	{
		block[x][y] = num;
		num++;
	}
}

void	find_four_left(char block[6][6], int x, int y)
{
	char	num;

	num = '1';
	while (++y <= 4)
	{
		block[x][y] = num;
		num++;
	}
}

void	find_four_right(char block[6][6], int x, int y)
{
	char	num;

	num = '1';
	while (--y >= 1)
	{
		block[x][y] = num;
		num++;
	}
}

//This functions write numbers from 1 to 4 if a 4 is found in the input.
