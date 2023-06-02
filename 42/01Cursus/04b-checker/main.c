/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 23:22:44 by pvilchez          #+#    #+#             */
/*   Updated: 2023/06/01 20:54:24 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpushswap.h"

size_t	error_memory(t_node **lst_a, t_node **lst_b)
{
	size_t	error;

	error = 0;
	if (!lst_a)
		error = 1;
	if (!lst_b)
	{
		ft_lstclear(lst_a);
		error = 1;
	}
	return (error);
}

t_node	**create_lst(t_node **lst, int argc, char *argv[])
{
	t_node	*aux;
	size_t	i;

	i = 1;
	lst = ft_calloc(1, sizeof(t_node *));
	while (i < (size_t)argc)
	{
		aux = ft_lstnew(ft_atoi(argv[i]));
		if (!aux)
			return (NULL);
		if (i == 1)
			ft_lstadd_front(lst, aux);
		else
			ft_lstadd_back(lst, aux);
		i++;
	}	
	return (lst);
}

int	main(int argc, char *argv[])
{
	t_node	**lst_a;
	t_node	**lst_b;

	lst_a = NULL;
	if (error_args(argc, argv))
	{
		ft_printf ("Error\n");
		return (0);
	}
	lst_a = create_lst(lst_a, argc, argv);
	lst_b = ft_calloc(1, sizeof(t_node *));
	if (error_memory(lst_a, lst_b))
	{
		ft_printf ("Error\n");
		return (0);
	}
	checker(lst_a, lst_b);
	ft_lstclear(lst_a);
	ft_lstclear(lst_b);
	return (0);
}
