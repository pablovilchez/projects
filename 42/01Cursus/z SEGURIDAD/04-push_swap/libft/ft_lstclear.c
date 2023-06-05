/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:54:37 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/29 03:53:09 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_node **lst)
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
