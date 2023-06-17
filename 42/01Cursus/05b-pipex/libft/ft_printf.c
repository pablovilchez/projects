/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 23:23:08 by pvilchez          #+#    #+#             */
/*   Updated: 2023/06/09 18:58:04 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	put_char(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

size_t	cast(const char *str, size_t i, va_list arg)
{
	size_t	count;

	count = 0;
	if (str[i] == 'c')
		count += put_char(va_arg(arg, int));
	else if (str[i] == 's')
		count += print_str(va_arg(arg, char *));
	else if (str[i] == 'p')
		count += print_void(va_arg(arg, void *));
	else if (str[i] == 'd')
		count += print_int(va_arg(arg, int));
	else if (str[i] == 'i')
		count += print_int(va_arg(arg, int));
	else if (str[i] == 'u')
		count += print_unsig_int(va_arg(arg, unsigned int));
	else if (str[i] == 'x')
		count += print_hex(va_arg(arg, unsigned int));
	else if (str[i] == 'X')
		count += print_hex_cap(va_arg(arg, unsigned int));
	else if (str[i] == '%')
		count += put_char('%');
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
			count += cast(str, i, arg);
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			count++;
		}
		i++;
	}
	va_end(arg);
	return ((int)count);
}
