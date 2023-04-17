/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_block_param_add.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebeardo <rebeardo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:19:47 by rebeardo          #+#    #+#             */
/*   Updated: 2023/02/12 17:14:47 by rebeardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_row_up(char *param, char block[6][6], int x, int y)
{
	int	pos;

	pos = 0;
	while ((y > 0) && (y < 5))
	{
		block[x][y] = param[pos];
		pos++;
		y++;
	}
}

void	ft_row_left_right(char *param, char block[6][6], int x)
{
	int	pos;

	pos = 8;
	while (x < 5)
	{
		block[x][0] = param[pos];
		block[x][5] = param[pos +4];
		pos++;
		x++;
	}
}

void	ft_row_down(char *param, char block[6][6], int x, int y)
{
	int	pos;

	pos = 0;
	while ((y > 0) && (y < 5))
	{
		block[x][y] = param[pos +4];
		pos++;
		y++;
	}
}

int	ft_param_alloc(char *param, char block[6][6])
{
	int		pos;

	ft_row_up(param, block, 0, 1);
	ft_row_left_right(param, block, 1);
	ft_row_down(param, block, 5, 1);
	return (0);
}

/* This set of functions add the input data to the exterior
rows and columns of our matrix*/
