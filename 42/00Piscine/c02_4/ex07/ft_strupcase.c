/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:03:47 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/14 10:12:47 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write(1, str, 1);
		str++;
	}
}
*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (*str != 0)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
		i++;
	}
	str = str - i;
	return (str);
}

/*
int	main(void)
{
	char	str[] = "hola";
	
	ft_strupcase(str);
	ft_putstr(str);
	return (0);
}
*/