/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_actions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 22:32:57 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/29 04:00:44 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpushswap.h"

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
	printf("p%c\n", x);
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
	printf("s%c\n", x);
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
	printf("r%c\n", x);
}

void	reverse(t_node **lst_a, t_node **lst_b, char x)
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
	if ((x == 'b' || x == 's') && ft_lstsize(*lst_b) > 1)
	{
		first = *lst_b;
		last = ft_lstlast(first);
		*lst_b = first->next;
		last->next = first;
		first->next = NULL;
	}
	printf("rr%c\n", x);
}
