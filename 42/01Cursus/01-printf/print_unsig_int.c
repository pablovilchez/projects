/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsig_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:41:57 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/04 21:41:45 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	print_unsig_int(unsigned int nbr)
{
	size_t	count;

	count = 0;
	count = print_str(ft_itoa_long((long)nbr));
	return (count);
}
