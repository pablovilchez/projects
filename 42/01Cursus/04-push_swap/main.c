/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 23:22:44 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/23 21:38:05 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpushswap.h"

int	main(void)
{
	t_node	**lst_a;
	t_node	**lst_b;
	t_node	*aux;

	lst_a = calloc(2, sizeof(t_node *));
	lst_b = calloc(2, sizeof(t_node *));
	aux = lst_new(5);
	lst_add_front(lst_a, aux);
	aux = lst_new(8);
	lst_add_back(lst_a, aux);
	aux = lst_new(1);
	lst_add_back(lst_a, aux);
	aux = lst_new(4);
	lst_add_back(lst_a, aux);
	aux = lst_new(3);
	lst_add_back(lst_a, aux);
	push_swap(lst_a, lst_b);
	lst_clear(lst_a);
	lst_clear(lst_b);
	return (0);
}
