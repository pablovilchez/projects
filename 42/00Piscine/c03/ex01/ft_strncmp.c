/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 21:52:47 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/16 11:22:35 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s2[i] < s1[i])
			return (1);
		i++;
	}
	if (s2[i] != '\0' && i < n)
		return (-1);
	return (0);
}

/*
int	main(void)
{
    char str1[10] = "b";
    char str2[10] = "a";
	unsigned int	n;
    
	n = 3;
    printf("%i", ft_strncmp(str1, str2, n));
    return(0);
}
*/