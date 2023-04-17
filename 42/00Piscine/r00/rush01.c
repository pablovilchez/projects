/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:43:44 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/05 17:43:16 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	while (row <= y && x > 0 && y > 0)
	{
		col = 1;
		while (col <= x)
		{
			if (row * col == 1)
				ft_putchar('/');
			else if ((row == y && col == 1) || (row == 1 && col == x))
				ft_putchar('\\');
			else if (row == y && col == x)
				ft_putchar('/');
			else if (row == 1 || col == 1 || row == y || col == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
