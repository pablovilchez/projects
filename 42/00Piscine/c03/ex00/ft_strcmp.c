/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:23:09 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/19 13:10:50 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s2[i] < s1[i])
			return (1);
		i++;
	}
	if (s2[i] != '\0')
		return (-1);
	return (0);
}

int	main(void)
{
    char str1[10] = "aaab";
    char str2[10] = "aaaab";
    
    printf("%i", ft_strcmp(str1, str2));
    return(0);
}
