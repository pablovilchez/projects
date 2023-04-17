/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comp_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfang <yfang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:44:09 by yfang             #+#    #+#             */
/*   Updated: 2023/02/12 13:10:39 by yfang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_comp_poss(char *param);

int	ft_comp_num(char *par)
{
	int	i;

	i = 0;
	while (par[i] != '\0')
	{
		if ((par[i] > 0 + '0' && par[i] < 5 + '0') || par[i] == 32)
			i++;
		else
		{
			write (1, "Solo 16 numeros del 1 al 4 con espacios.", 40);
			return (1);
		}
	}
	if (ft_comp_poss(par) == 1)
		return (1);
	else
		return (0);
}
