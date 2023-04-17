/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2_4_vs_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocaball <jocaball@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 21:43:56 by jocaball          #+#    #+#             */
/*   Updated: 2023/02/12 22:38:13 by jocaball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_2_4_vs_3_right(char matrix[6][6]);
void	ft_2_4_vs_3_left(char matrix[6][6]);
void	ft_2_4_vs_3_up(char matrix[6][6]);
void	ft_2_4_vs_3_down(char matrix[6][6]);

void	ft_2_4_vs_3(char matrix[6][6])
{
	ft_2_4_vs_3_right(matrix);
	ft_2_4_vs_3_left(matrix);
	ft_2_4_vs_3_up(matrix);
	ft_2_4_vs_3_down(matrix);
}
