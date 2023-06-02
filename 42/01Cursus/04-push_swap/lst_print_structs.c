/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_print_structs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 01:10:47 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/30 02:18:40 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpushswap.h"

void	lst_print_node_s(t_node *lst)
{
	int	num_len;

	num_len = ft_strlen(ft_itoa(lst->num));
	ft_printf("%i", lst->num);
	while (num_len < 3)
	{
		ft_printf(" ");
		num_len++;
	}
	ft_printf("    %i     %i ", lst->index, lst->pos);
	ft_printf("    %i    ", lst->target_pos);
	num_len = ft_strlen(ft_itoa(lst->cost_a));
	while (num_len < 3)
	{
		ft_printf(" ");
		num_len++;
	}
	ft_printf("%i   ", lst->cost_a);
	num_len = ft_strlen(ft_itoa(lst->cost_b));
	while (num_len < 3)
	{
		ft_printf(" ");
		num_len++;
	}
	ft_printf("%i\n", lst->cost_b);
}

void	lst_print_structs(t_node **lst_a, t_node **lst_b)
{
	t_node	*pos_a;
	t_node	*pos_b;

	pos_a = *lst_a;
	pos_b = *lst_b;
	ft_printf("\n** Stack A **\n");
	ft_printf("NUM   IND   POS   TAR   C-A   C-B\n");
	while (pos_a)
	{
		lst_print_node_s(pos_a);
		pos_a = pos_a->next;
	}
	ft_printf("\n** Stack B **\n");
	ft_printf("NUM   IND   POS   TAR   C-A   C-B\n");
	while (pos_b)
	{
		lst_print_node_s(pos_b);
		pos_b = pos_b->next;
	}
	ft_printf("\n");
}
