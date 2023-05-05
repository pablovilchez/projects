/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:18:49 by pvilchez          #+#    #+#             */
/*   Updated: 2023/04/26 20:33:02 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	reverse(long num, int fd)
{
	char	c;

	if (num >= 10)
		reverse(num / 10, fd);
	c = num % 10 + '0';
	ft_putchar_fd(c, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = (long)n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		num *= -1;
	}
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n != 0)
		reverse(num, fd);
}
