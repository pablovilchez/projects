/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:15:00 by pvilchez          #+#    #+#             */
/*   Updated: 2023/06/06 22:56:03 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*c;

	c = malloc(number * size);
	if (c != NULL)
		ft_memset(c, 0, number * size);
	return (c);
}
