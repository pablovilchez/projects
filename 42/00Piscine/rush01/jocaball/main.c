/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaball <jocaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 21:49:01 by jocaball          #+#    #+#             */
/*   Updated: 2023/02/12 17:59:58 by jocaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>

//int		ft_check_parameters(char **parameters, char *view);
//void	ft_putstr(char *str);
void	ft_find_23_put_4(char matrix[6][6]);
//char	**ft_create_matrix(int value, int row, int col);
void	ft_print_matrix(char matrix[6][6]);
void	ft_find_the_fourth(char matrix[6][6]);
void	ft_find_4_vs_2_put_3(char matrix[6][6]);

int	main(int argc, char **argv)
{
//	char	**matrix;
//	char	view[16];

	char	matrix[6][6] = {{'0','2','2','1','4','0'},
	                    	{'2','0','0','4','0','2'},
							{'1','4','0','0','0','3'},
							{'2','0','0','0','0','2'},
							{'3','0','0','0','4','1'},
							{'0','3','2','3','1','0'}};

//	if (argc != 2)
//	{
//		ft_putstr("ERROR: Missing or exceded parameters.\n");
//		return (0);
//	}
//	if (!ft_check_parameters(argv, view))
//		return (0);
//	matrix = ft_create_matrix('0', 6, 6);
	ft_find_23_put_4(matrix);
	ft_find_the_fourth(matrix);
	ft_find_4_vs_2_put_3(matrix);
	ft_print_matrix(matrix);
	return (0);
}
