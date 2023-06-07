/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_long.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 12:09:22 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/07 13:49:35 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	phex_long(unsigned long long nbr, size_t *p)
{
	size_t	i;
	char	*alpha;

	alpha = "0123456789abcdef";
	if (nbr >= 16)
		phex_long(nbr / 16, p);
	i = (nbr % 16);
	ft_putchar_fd(alpha[i], 1);
	*p = *p + 1;
}

size_t	print_hex_long(unsigned long long nbr)
{
	size_t	count;
	size_t	*p;

	count = 0;
	p = &count;
	phex_long(nbr, p);
	return (count);
}
