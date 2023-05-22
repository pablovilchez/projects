/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_funct_01.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 23:09:00 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/21 23:09:04 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpushswap.h"

t_node	*lst_new(int num)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (node == NULL)
		return (NULL);
	node->num = num;
	node->next = NULL;
	return (node);
}

int	lst_size(t_node *lst)
{
	int	i;

	i = 0;
	if (lst)
	{
		i = 1;
		while (lst->next != NULL)
		{
			i++;
			lst = lst->next;
		}
	}
	return (i);
}

t_node	*lst_last(t_node *lst)
{
	if (lst)
	{
		while (lst->next != NULL)
			lst = lst->next;
	}
	return (lst);
}
