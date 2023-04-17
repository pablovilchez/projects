/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:01:49 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/10 14:33:35 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		ft_swap((tab + i), (tab + j));
		i++;
		j--;
	}
}

/*
int	main(void)
{
	int	array_a[7] = {12, 34, 32, 9, 54, 74, 1};
	int	*tab;
	int	i;
	int	size;

	size = 7;
	tab = &array_a[0];
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%i ", array_a[i]);
		i++;
	}
	return (0);
}
*/