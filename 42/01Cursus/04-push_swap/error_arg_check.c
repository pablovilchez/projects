/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_arg_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 01:53:30 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/29 03:32:56 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpushswap.h"

size_t	check_args(int argc)
{
	if (argc < 3)
		return (1);
	return (0);
}

size_t	check_int(int argc, char *argv[])
{
	size_t	i;
	size_t	len;

	while (i < (size_t)argc)
	{
		len = ft_strlen(argv[i]);
		if (len > 11)
			return (1);
		if (len == 11 && argv[i][0] != '-')
			return (1);
		if (len == 11 && argv[i][0] == '-')
			if (ft_strncmp("-2147483648", argv[i], 15) < 0)
				return (1);
		if (len == 10 && argv[i][0] != '-')
			if (ft_strncmp("2147483647", argv[i], 15) < 0)
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
			if (ft_strncmp(argv[i], argv[j], 20) == 0)
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
	if (argc == 1)
		return (1);
	while (i < (size_t)argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (j == 0 && argv[i][0] == '-')
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
	if (check_args(argc) == 1)
	{
		printf("Error. Número incorrecto de parámetros.\n");
		return (1);
	}
	if (check_digit(argc, argv) == 1)
	{
		printf("Error. Elemento/s nos numérico/s.\n");
		return (1);
	}
	if (check_doubles(argc, argv) == 1)
	{
		printf("Error. Elemento/s duplicado/s.\n");
		return (1);
	}
	if (check_int(argc, argv) == 1)
	{
		printf("Error. Entero/s no válido/s.\n");
		return (1);
	}
	return (0);
}
