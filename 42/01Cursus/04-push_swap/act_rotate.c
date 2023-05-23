/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   act_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 22:32:57 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/23 21:24:44 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpushswap.h"

t_node	**rotate(t_node **lst)
{
	t_node	*first;
	t_node	*last;

	if (lst_size(*lst) > 1)
	{
		first = *lst;
		last = lst_last(first);
		*lst = first->next;
		last->next = first;
		first->next = NULL;
	}
	return (lst);
}

void	act_rotate(t_node **lst_a, t_node **lst_b, char mode)
{
	if (mode == 'a' && lst_size(*lst_a) > 1)
	{
		rotate(lst_a);
		printf("ra\n");
	}
	else if (mode == 'b' && lst_size(*lst_b) > 1)
	{
		rotate(lst_b);
		printf("rb\n");
	}
	else if (mode == 'r' && lst_size(*lst_a) > 1 && lst_size(*lst_b) > 1)
	{
		rotate(lst_a);
		rotate(lst_b);
		printf("rr\n");
	}
}
