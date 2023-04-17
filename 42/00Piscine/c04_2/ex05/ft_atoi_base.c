/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:49:17 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/19 10:39:31 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	total;
	int	s;
	int	i;

	i = 0;
	s = 1;
	total = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s = s * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = total * 10 + (str[i] - '0');
		i++;
	}
	return (total * s);
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

int	sgn(char *str)
{
	int	n;

	n = ft_atoi(str);
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	return (n);
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

void	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		len;
	int		val_pos;
	int		nbr;
	char	sol[20];

	i = 0;
	len = ft_strlen(base);
	if (check_base(base) == 0)
	{
		nbr = sgn(str);
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
			write(1, &sol[i], 1);
			i--;
		}
	}
}

/*
int	main(void)
{
	char	base[] = "01";
	char	str[] = "---10hd2342";

	ft_atoi_base(str, base);
	return (0);
}
*/