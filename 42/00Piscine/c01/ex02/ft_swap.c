/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:15:17 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/06 14:21:17 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/*
int	main(void)
{
	int	a;
	int	b;
	int	*pt_a;
	int	*pt_b;

	a = 20;
	b = 50;
	pt_a = &a;
	pt_b = &b;
	ft_swap(pt_a, pt_b);
	printf("%i  %i", a, b);
	return (0);
}
*/