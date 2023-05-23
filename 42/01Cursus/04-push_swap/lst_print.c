/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 22:41:00 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/23 21:10:32 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpushswap.h"

void	lst_print(t_node **lst)
{
	t_node	*pos;

	pos = *lst;
	while (pos)
	{
		printf("%i\n", pos->num);
		pos = pos->next;
	}
}

void	lst_print_both(t_node **lst_a, t_node **lst_b)
{
	lst_print(lst_a);
	printf("\n");
	lst_print(lst_b);
}
