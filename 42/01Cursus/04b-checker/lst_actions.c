/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_actions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 22:32:57 by pvilchez          #+#    #+#             */
/*   Updated: 2023/06/09 22:46:20 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftchecker.h"

void	push(t_node **lst_a, t_node **lst_b, char x)
{
	t_node	*aux;
	t_node	*aux_a;
	t_node	*aux_b;

	aux_a = *lst_a;
	aux_b = *lst_b;
	if (x == 'a' && ft_lstsize(*lst_b) > 0)
	{
		aux = *lst_b;
		*lst_b = aux_b->next;
		aux->next = aux_a;
		*lst_a = aux;
	}
	if (x == 'b' && ft_lstsize(*lst_a) > 0)
	{
		aux = *lst_a;
		*lst_a = aux_a->next;
		aux->next = aux_b;
		*lst_b = aux;
	}
}

void	swap(t_node **lst_a, t_node **lst_b, char x)
{
	t_node	*aux_a;
	t_node	*aux_b;

	if ((x == 'a' || x == 's') && ft_lstsize(*lst_a) > 1)
	{
		aux_a = *lst_a;
		aux_b = aux_a->next;
		*lst_a = aux_b;
		aux_a->next = aux_b->next;
		aux_b->next = aux_a;
	}
	if ((x == 'b' || x == 's') && ft_lstsize(*lst_b) > 1)
	{
		aux_a = *lst_b;
		aux_b = aux_a->next;
		*lst_b = aux_b;
		aux_a->next = aux_b->next;
		aux_b->next = aux_a;
	}
}

void	rotate(t_node **lst_a, t_node **lst_b, char x)
{
	t_node	*first;
	t_node	*last;

	if ((x == 'a' || x == 'r') && ft_lstsize(*lst_a) > 1)
	{
		first = *lst_a;
		last = ft_lstlast(first);
		*lst_a = first->next;
		last->next = first;
		first->next = NULL;
	}
	if ((x == 'b' || x == 'r') && ft_lstsize(*lst_b) > 1)
	{
		first = *lst_b;
		last = ft_lstlast(first);
		*lst_b = first->next;
		last->next = first;
		first->next = NULL;
	}
}

void	reverse(t_node **lst_a, t_node **lst_b, char x)
{
	t_node	*before_last;
	t_node	*last;

	if ((x == 'a' || x == 'r') && ft_lstsize(*lst_a) > 1)
	{
		before_last = *lst_a;
		last = ft_lstlast(*lst_a);
		while (before_last->next != last)
			before_last = before_last->next;
		last->next = *lst_a;
		*lst_a = last;
		before_last->next = NULL;
	}
	if ((x == 'b' || x == 'r') && ft_lstsize(*lst_b) > 1)
	{
		before_last = *lst_b;
		last = ft_lstlast(*lst_b);
		while (before_last->next != last)
			before_last = before_last->next;
		last->next = *lst_b;
		*lst_b = last;
		before_last->next = NULL;
	}
}
