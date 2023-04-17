/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfang <yfang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:43:54 by yfang             #+#    #+#             */
/*   Updated: 2023/02/12 19:21:21 by yfang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_triples(char matriz[6][6]);
void	ft_find_the_fourth_col(char matrix[6][6]);
void	ft_find_the_fourth_row(char matrix[6][6]);
void	ft_find_23_put_4(char matrix[6][6]);
void	ft_print_matrix(char matrix[6][6]);
void	ft_find_the_fourth(char matrix[6][6]);
void	ft_find_4_vs_2_put_3(char matrix[6][6]);
void	ft_short_parm(char *param, char *param_s, int size);
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
void	ft_const_tab(char *param, char block[6][6]);
int		ft_comp_num(char *param);

void	ft_print(char block[6][6])
{
	int	x;
	int	y;

	x = 1;
	while (x < 5)
	{
		y = 1;
		while (y < 5)
		{
			printf("%c ", block[x][y]);
			y++;
		}
		x++;
		printf("\n");
	}
}

int	main(int argc, char *argv[])
{
	char	block[6][6];
	char	*param;
	char	param_s[17];
	int		size;

	param = argv[1];
	size = 17;
	if (argc == 2)
	{
		if (ft_comp_num(param) == 1)
			return (0);
		ft_short_parm(param, param_s, size);
		ft_matrix_const(param_s, block);
		ft_find_four(block, 0, 0);
		ft_find_one(block, 0, 0);
		ft_find_23_put_4(block);
		ft_find_4_vs_2_put_3(block);
		ft_triples(block);
/* 		ft_find_the_fourth_col(block);
		ft_find_the_fourth_row(block); */
		ft_print(block);
		return (0);
	}
	else
		write(1, "Porfavor introduzca 1 solo argumento.", 37);
}

/* 
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		if (ft_comp_num(argv[1]) == 1)
			return (0);
		write(1, "todo perfecto.", 14);
	}
	else
		write(1, "Porfavor introduzca 1 solo argumento.", 37);
}
 */