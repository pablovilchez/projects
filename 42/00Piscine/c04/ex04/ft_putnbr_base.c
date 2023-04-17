/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:48:16 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/19 10:39:29 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != 0)
	{
		i++;
	}
	return (i);
}

void	sgn(int *num)
{
	if (*num < 0)
	{
		write(1, "-", 1);
		*num *= -1;
	}
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] < 33 || base[i] == 127)
			return (1);
		else
		{
			while (base[j])
			{
				if (base[i] == base[j])
					return (1);
				j++;
			}
		}
		i++;
	}
	if (i < 2)
		return (1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		len;
	int		val_pos;
	char	sol[20];

	i = 0;
	len = ft_strlen(base);
	if (check_base(base) == 0)
	{
		sgn(&nbr);
		while (nbr > 0 || nbr < 0)
		{
			val_pos = nbr % len;
			sol[i] = base[val_pos];
			nbr /= len;
			i++;
		}
		i--;
		while (i >= 0)
		{
			ft_putchar(sol[i]);
			i--;
		}
	}
}

/*
int	main(void)
{
	char	base[] = "poniguay";
	int		num = -15480;

	ft_putnbr_base(num, base);
	return (0);
}
*/