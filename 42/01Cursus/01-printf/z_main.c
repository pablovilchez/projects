/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   z_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:39:31 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/03 19:01:15 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main(void)
{
	const char	*str = "ho%ila\n";
	const char	*str2 = "ho%ila\n";
	int			res;

	res = ft_printf("hola %i %c", 12, 's');
	return (res);
}