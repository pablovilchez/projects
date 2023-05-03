/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:08:10 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/03 20:18:24 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	print_str(char *str)
{
	size_t	count;
	size_t	i;

	count = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		count++;
	}
	return (count);
}
