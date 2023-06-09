/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_end.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 20:17:37 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/12 20:38:42 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_end(char src[6][6])
{
	int	i;
	int	j;
	int	blank;

	blank = 0;
	i = 1;
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			if (src[i][j] == '0')
				blank = 1;
			j++;
		}
		i++;
	}
	return (blank);
}
