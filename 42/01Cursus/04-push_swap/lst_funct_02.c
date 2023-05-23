/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_funct_02.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:31:28 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/23 21:11:08 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpushswap.h"

void	lst_delone(t_node *lst)
{
	t_node	*aux;

	if (lst)
	{
		aux = lst;
		lst = lst->next;
		free(aux);
	}
}

void	lst_clear(t_node **lst)
{
	t_node	*node;
	t_node	*aux;

	node = *lst;
	while (node != NULL)
	{
		aux = node;
		node = node->next;
		free(aux);
	}
	*lst = node;
}

void	lst_add_back(t_node **lst, t_node *new)
{
	t_node	*last;

	last = *lst;
	if (last == NULL)
	{
		lst_add_front(lst, new);
	}
	else
	{
		last = lst_last(*lst);
		last->next = new;
	}
}

void	lst_add_front(t_node **lst, t_node *new)
{
	new->next = *lst;
	*lst = new;
}
