/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_block_const.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebeardo <rebeardo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:19:47 by rebeardo          #+#    #+#             */
/*   Updated: 2023/02/12 17:10:28 by rebeardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_param_alloc(char *param, char block[6][6]);

void	ft_matrix_const(char *param, char block[6][6])
{
	int		x;
	int		y;

	x = 0;
	while (x < 6)
	{
		y = 0;
		while (y < 6)
		{
			block[x][y] = '0';
			y++;
		}
		x++;
	}
	ft_param_alloc(param, block);
}

/*This function creates a matrix full of '0' and summons
the function that inserts the input values */
