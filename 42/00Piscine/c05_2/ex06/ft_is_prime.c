/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:46:09 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/20 20:49:50 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb > 1)
	{
		i = nb / 2;
		while (i > 1)
		{
			if (nb % i == 0)
				return (0);
			i--;
		}
		return (1);
	}
	return (0);
}

/*
int	main(void)
{
	int	nb;
	int	res;

	nb = -20;
	res = ft_is_prime(nb);
	printf("%i", res);
	return (0);
}
*/