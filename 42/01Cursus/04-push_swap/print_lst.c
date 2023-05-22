/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 22:41:00 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/21 23:34:32 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpushswap.h"

void	print_lst(t_node **lst)
{
	t_node	*pos;

	pos = *lst;
	while (pos->next)
	{
		pos = pos->next;
	}
}

void	print_2list(t_node **lst_a, t_node **lst_b)
{
	t_node	*pos_a;
	t_node	*pos_b;

	pos_a = *lst_a;
	pos_b = *lst_b;
	while (pos_a->next)
	{
		pos_a = pos_a->next;
	}
}