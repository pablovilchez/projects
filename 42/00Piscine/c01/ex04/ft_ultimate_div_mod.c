/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:39:07 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/06 17:02:10 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *a / *b;
	*b = aux % *b;
}

/*
int	main(void)
{
	int	a;
	int	b;
	int	*pt_a;
	int	*pt_b;

	pt_a = &a;
	pt_b = &b;
	a = 9;
	b = 4;
	ft_ultimate_div_mod(pt_a, pt_b);
	printf("División: %i    Resto: %i", a, b);
	return (0);
}
*/