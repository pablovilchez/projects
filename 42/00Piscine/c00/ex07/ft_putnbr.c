/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:02:10 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/07 23:05:27 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	array[15];
	int	i;
	int	aux;

	if (nb == 0)
		write (1, "0", 1);
	else if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else if (nb < 0)
	{
		write (1, "-", 1);
		nb = nb * -1;
	}
	i = 0;
	while (nb != 0)
	{
		array[i] = nb % 10;
		nb = nb / 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		aux = array[i] + '0';
		write (1, &aux, 1);
	}
}

int	main(void)
{
	ft_putnbr(-1473647);
	return (0);
}
