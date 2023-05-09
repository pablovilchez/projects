/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:13:47 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/09 18:42:05 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*c;

	c = malloc(number * size);
	if (c != NULL)
		ft_memset(c, 0, number * size);
	return (c);
}
