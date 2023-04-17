/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:02:20 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/05 20:26:47 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	int	i;
	int	array[10];
	int	aux;

	i = 0;
	while (i < n)
	{
		array[i] = i;
		i++;
	}
	i = 0;
	while (i < n)
	{
		aux = array[i] + '0';
		write(1, &aux, 1);
		i++;
	}
}

int	main(void)
{
	ft_print_combn(5);
	return (0);
}
