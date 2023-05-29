/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:36:18 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/07 12:01:32 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	print_int(int nbr)
{
	size_t	count;
	char	*str;

	count = 0;
	str = ft_itoa(nbr);
	count = print_str(str);
	free (str);
	return (count);
}
