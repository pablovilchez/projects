/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:20:12 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/29 03:58:18 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node	*ft_lstlast(t_node *lst)
{
	if (lst)
	{
		while (lst->next != NULL)
			lst = lst->next;
	}
	return (lst);
}
