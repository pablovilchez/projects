/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   act_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:31:57 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/23 21:34:29 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpushswap.h"

t_node	**swap(t_node **lst)
{
	t_node	*aux_a;
	t_node	*aux_b;

	aux_a = *lst;
	aux_b = aux_a->next;
	*lst = aux_b;
	aux_a->next = aux_b->next;
	aux_b->next = aux_a;
	return (lst);
}

void	act_swap(t_node **lst_a, t_node **lst_b, char mode)
{
	if (mode == 'a' && lst_size(*lst_a) > 1)
	{
		swap(lst_a);
		printf("sa\n");
	}
	else if (mode == 'b' && lst_size(*lst_b) > 1)
	{
		swap(lst_b);
		printf("sb\n");
	}
	else if (mode == 's' && lst_size(*lst_a) > 1 && lst_size(*lst_b) > 1)
	{
		swap(lst_a);
		swap(lst_b);
		printf("ss\n");
	}
}
