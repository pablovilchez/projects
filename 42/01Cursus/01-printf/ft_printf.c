/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 23:23:08 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/03 19:04:26 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	cast(char *str, size_t i, va_list arg)
{
	size_t	count;

	count = 0;
	if (str[i] == 'c')
		count = print_char(va_arg(arg, char));
	else if (str[i] == 's')
		count = print_str(va_arg(arg, char *));
	else if (str[i] == 'p')
		count = print_void(va_arg(arg, void *));
	else if (str[i] == 'd')
		count = print_dec(va_arg(arg, int));
	else if (str[i] == 'i')
		count = print_int(va_arg(arg, int));
	else if (str[i] == 'u')
		count = print_unsig(va_arg(arg, unsigned int));
	else if (str[i] == 'x')
		count = print_hexl(va_arg(arg, unsigned int));
	else if (str[i] == 'X')
		count = print_hexu(va_arg(arg, unsigned int));
	else if (str[i] == '%')
		ft_putchar('%', 1);
		count = 1;
	return (count);
}

int	ft_printf(const char *str, ...)
{
	size_t	i;
	size_t	count;
	va_list	arg;

	va_start(arg, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += cast(&arg);
		}
		else
		{
			ft_putchar(str[i]);
			count++;
		}
		i++;
	}
	va_end(arg);
	return (count);
}
