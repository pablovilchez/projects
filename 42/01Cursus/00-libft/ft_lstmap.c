/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:17:08 by pvilchez          #+#    #+#             */
/*   Updated: 2023/04/27 20:29:45 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*aux;
	t_list	*aux2;

	if (lst == NULL)
		return (NULL);
	newlst = ft_lstnew((f)(lst->content));
	if (newlst == NULL)
		return (NULL);
	aux = newlst;
	lst = lst->next;
	while (lst)
	{
		aux2 = ft_lstnew((f)(lst->content));
		if (aux2 == NULL)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		aux->next = aux2;
		aux = aux2;
		lst = lst->next;
	}
	return (newlst);
}
