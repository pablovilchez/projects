/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:39:21 by pvilchez          #+#    #+#             */
/*   Updated: 2023/04/18 14:41:00 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(char *str, int c, size_t n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[50];
	char	str2[50];
	int		i;

	strcpy(str, "This is string.h library function");
	puts(str);
	i = 0;
	while (str[i])
	{
		str2[i] = str[i];
		i++;
	}
	memset(str, '$', 7);
	puts(str);
	ft_memset(str2, '$', 7);
	puts(str2);
	return (0);
}
