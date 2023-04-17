/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rebeardo <rebeardo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:49:54 by rebeardo          #+#    #+#             */
/*   Updated: 2023/02/12 17:15:33 by rebeardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_matrix_const(char *param, char block[6][6]);
int		ft_param_alloc(char *param, char block[6][6]);
void	ft_row_up(char *param, char block[6][6], int x, int y);
void	ft_row_left_right(char *param, char block[6][6], int x);
void	ft_row_down(char *param, char block[6][6], int x, int y);
int		ft_param_alloc(char *param, char block[6][6]);
void	ft_find_one(char block[6][6], int x, int y);
void	ft_find_four(char block[6][6], int x, int y);
void	find_four_up(char block[6][6], int x, int y);
void	find_four_down(char block[6][6], int x, int y);
void	find_four_left(char block[6][6], int x, int y);
void	find_four_right(char block[6][6], int x, int y);

void	ft_print(char block[6][6])
{
	int	x;
	int	y;

	x = 0;
	while (x < 6)
	{
		y = 0;
		while (y < 6)
		{
			printf("%c ", block[x][y]);
			y++;
		}
		x++;
		printf("\n");
	}
}

int	main(void)
{
	char	*param;
	char	block[6][6];

	param = "4212123333212124";
	ft_matrix_const(param, block);
	ft_find_one(block, 0, 0);
	ft_find_four(block, 0, 0);
	ft_print(block);
	return (0);
}
