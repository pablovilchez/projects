/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   z_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:39:31 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/07 09:07:10 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	const char	*str = "ho%ila\n";
	const char	*str2 = "ho%ila\n";
	int			res;

	ft_printf("hola %i %c\n", 12, 's');
	return (0);
}
