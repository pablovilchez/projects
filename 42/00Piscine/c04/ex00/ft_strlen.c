/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:57:19 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/17 13:19:56 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != 0)
	{
		i++;
	}
	return (i);
}

/*
int	main(void)
{
	int		i;
	char	*str;

	str = "Cadena de prueba";
	i = ft_strlen(str);
	printf("%i letras", i);
	return (0);
}
*/