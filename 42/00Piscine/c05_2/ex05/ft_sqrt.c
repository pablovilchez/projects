/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:00:43 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/20 19:45:36 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	res;

	res = 0;
	while (res < 46341)
	{
		if (res * res == nb)
			return (res);
		res++;
	}
	return (0);
}

/*
int	main(void)
{
	int	nb;
	int	res;

	nb = 125;
	res = ft_sqrt(nb);
	printf("%i", res);
	return (0);
}
*/