/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:50:35 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/20 21:06:04 by pvilchez         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;

	if (ft_is_prime(nb) == 1)
		return (nb);
	else
	{
		i = nb + 1;
		while (ft_is_prime(i) == 0)
			i++;
		return (i);
	}
}

/*
int	main(void)
{
	int	nb;
	int	res;

	nb = 15;
	res = ft_find_next_prime(nb);
	printf("%i", res);
	return (0);
}
*/