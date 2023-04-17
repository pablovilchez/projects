/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 22:12:36 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/07 09:17:11 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size -1)
	{
		if (*(tab + i) > *(tab + i + 1))
		{
			ft_swap((tab + i), (tab + i + 1));
			i = -1;
		}	
		i++;
	}
}

/*
int	main(void)
{
	int	array_a[7] = {12, 34, -27, 9, 0, 74, 1};
	int	*tab;
	int	i;
	int	num;

	num = 7;
	tab = &array_a[0];
	ft_sort_int_tab(tab, num);
	i = 0;
	while (i < num)
	{
		printf("%i ", array_a[i]);
		i++;
	}
	return (0);
}
*/