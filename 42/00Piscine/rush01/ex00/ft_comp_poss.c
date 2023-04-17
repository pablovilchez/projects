/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comp_poss.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfang <yfang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:27:02 by yfang             #+#    #+#             */
/*   Updated: 2023/02/12 15:40:58 by yfang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_short_parm(char *param, char *param_s, int size);

int	ft_comp_5(char *param, int i, int j)
{
	if ((param[i] + param[j]) == 98 || (param[i] + param[j]) > 101)
	{
		write(1, "Esta combinacion no es posible.", 31);
		return (1);
	}
	return (0);
}

int	ft_comp_poss(char *param)
{
	int		i;
	int		j;
	int		size;
	char	parm_s[17];

	i = 0;
	j = 4;
	size = 17;
	ft_short_parm(param, parm_s, size);
	while (i < 12)
	{	
		if (i < 4)
			if (ft_comp_5(parm_s, i, j) == 1)
				return (1);
		if (i > 7)
			if (ft_comp_5(parm_s, i, j) == 1)
				return (1);
		i++;
		j++;
	}
	return (0);
}
