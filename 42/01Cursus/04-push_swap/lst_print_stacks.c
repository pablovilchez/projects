/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_print_stacks.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 22:41:00 by pvilchez          #+#    #+#             */
/*   Updated: 2023/05/30 01:11:07 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpushswap.h"

void	print_format(char c)
{
	if (c == 'e')
		ft_printf("          ");
	if (c == 'b')
		ft_printf("   * list a ** list b *\n\n");
	if (c == 'n')
		ft_printf("\n");
}

t_node	*lst_print_node(t_node *lst)
{
	int	space;
	int	num_len;

	space = 10;
	num_len = ft_strlen(ft_itoa(lst->num));
	while (space > num_len)
	{
		ft_printf(" ");
		space--;
	}
	ft_printf("%i", lst->num);
	lst = lst->next;
	return (lst);
}

void	lst_print_stacks(t_node **lst_a, t_node **lst_b)
{
	t_node	*pos_a;
	t_node	*pos_b;
	int		size_a;
	int		size_b;
	int		line;

	pos_a = *lst_a;
	pos_b = *lst_b;
	size_a = ft_lstsize(*lst_a);
	size_b = ft_lstsize(*lst_b);
	line = size_a;
	if (size_a < size_b)
		line = size_b;
	while (line > 0)
	{
		if (size_a >= line)
			pos_a = lst_print_node(pos_a);
		else
			print_format('e');
		if (size_b >= line)
			pos_b = lst_print_node(pos_b);
		print_format('n');
		line--;
	}
	print_format('b');
}
