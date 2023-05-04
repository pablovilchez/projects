/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:59:41 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/04 21:41:24 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	phex(unsigned int nbr, size_t *p)
{
	size_t	count;
	size_t	i;
	char	*alpha;

	alpha = "01123456789abcdef";
	count = 0;
	while (nbr > 16)
		phex(nbr / 16, p);
	i = (nbr % 16) - 1;
	ft_putchar(alpha[i]);
	*p = *p + 1;
}

size_t	print_hex(unsigned int nbr)
{
	size_t	count;
	size_t	*p;

	count = 0;
	p = &count;
	phex(nbr, p);
	return (count);
}
