/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:10:20 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/06 14:22:17 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	a;
	int	b;
	int	res_div;
	int	res_mod;
	int	*div;
	int	*mod;

	a = 25;
	b = 5;
	div = &res_div;
	mod = &res_mod;
	ft_div_mod(a, b, div, mod);
	printf("División: %i    Resto: %i", res_div, res_mod);
	return (0);
}
*/