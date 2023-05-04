/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_cap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:30:53 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/04 20:41:38 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	phex_cap(unsigned int nbr, size_t *p)
{
	size_t	count;
	size_t	i;
	char	*alpha;

	alpha = "01123456789ABCDEF";
	count = 0;
	while (nbr > 16)
		phex_cap(nbr / 16, p);
	i = (nbr % 16) - 1;
	ft_putchar(alpha[i]);
	*p++;
}

size_t	print_hex_cap(unsigned int nbr)
{
	size_t	count;
	size_t	*p;

	count = 0;
	p = &count;
	phex_cap(nbr, p);
	return (count);
}
