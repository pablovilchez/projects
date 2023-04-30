/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   z_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:39:31 by pvilchez          #+#    #+#             */
/*   Updated: 2023/04/30 17:14:32 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main(void)
{
	const char	*cadena = "ho%ila\n";
	int			res;

	res = ft_printf(cadena);
	return (res);
}
