/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsig_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:41:57 by pvilchez          #+#    #+#             */
/*   Updated: 2023/06/09 18:57:57 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	print_unsig_int(unsigned int nbr)
{
	size_t	count;
	char	*str;

	count = 0;
	str = ft_itoa_long((long)nbr);
	count = print_str(str);
	free (str);
	return (count);
}
