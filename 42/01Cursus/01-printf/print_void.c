/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_void.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:20:34 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/06 22:50:30 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	print_void(unsigned long long p)
{
	size_t				count;
	unsigned long long	num;

	count = 0;
	num = p;
	num++;
	return (count);
}
