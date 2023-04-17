/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:45:38 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/14 13:24:35 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		dec;
	int		uni;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ')
			ft_putchar(str[i]);
		else
		{
			dec = str[i] / 16;
			uni = str[i] % 16;
			ft_putchar('\\');
			ft_putchar(hex[dec]);
			ft_putchar(hex[uni]);
		}
		i++;
	}
}

/*
int	main(void)
{
	char	*str;

	str = "fghs\nhSgsgs";
	ft_putstr_non_printable(str);
	return (0);
}
*/