/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_arg_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 01:53:30 by pvilchez          #+#    #+#             */
/*   Updated: 2023/06/01 17:51:33 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpushswap.h"

size_t	check_int_len(size_t len, char sig, char *str)
{
	if (len > 11)
		return (1);
	else if (len == 11 && sig != '-' && str[0] != '+')
		return (1);
	else if (len == 11 && sig == '-')
	{
		if (ft_strncmp("-2147483648", str, 15) < 0)
			return (1);
	}
	else if (len == 11 && sig != '+')
	{
		if (ft_strncmp("+2147483647", str, 15) < 0)
			return (1);
	}
	else if (len == 10 && sig != '-' && sig != '+')
	{
		if (ft_strncmp("2147483647", str, 15) < 0)
			return (1);
	}
	return (0);
}

size_t	check_int(int argc, char *argv[])
{
	size_t	i;
	size_t	len;

	i = 1;
	while (i < (size_t)argc)
	{
		len = ft_strlen(argv[i]);
		if (check_int_len(len, argv[i][0], argv[i]))
			return (1);
		i++;
	}
	return (0);
}

size_t	check_doubles(int argc, char *argv[])
{
	size_t	i;
	size_t	j;

	i = 1;
	while (i < (size_t)argc - 1)
	{
		j = i + 1;
		while (j < (size_t)argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

size_t	check_digit(int argc, char *argv[])
{
	size_t	i;
	size_t	j;

	i = 1;
	if (argc < 3)
		return (1);
	while (i < (size_t)argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (j == 0 && (argv[i][0] == '-' || argv[i][0] == '+'))
				j++;
			if (!ft_isdigit(argv[i][j]))
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

int	error_args(int argc, char *argv[])
{
	if (check_digit(argc, argv) == 1)
	{
		ft_printf("Elemento no numérico, o insuficientes parámetros.\n");
		return (1);
	}
	if (check_int(argc, argv) == 1)
	{
		ft_printf("Entero no válido.\n");
		return (1);
	}
	if (check_doubles(argc, argv) == 1)
	{
		ft_printf("Elemento duplicado.\n");
		return (1);
	}
	return (0);
}
