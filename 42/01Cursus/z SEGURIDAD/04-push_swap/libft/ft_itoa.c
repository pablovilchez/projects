/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:38:13 by pvilchez          #+#    #+#             */
/*   Updated: 2023/04/26 13:54:30 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	num_len(long n)
{
	size_t	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	if (i == 0)
		return (1);
	return (i);
}

void	comp_num(char *res, long num, size_t s)
{
	while (num > 0)
	{
		res[s] = (num % 10) + '0';
		num /= 10;
		if (s > 0)
			s--;
	}
}

char	*ft_itoa(int n)
{
	size_t	s;
	long	num;
	char	*res;

	num = (long)n;
	if (num < 0)
		num *= -1;
	s = num_len(num);
	if (n < 0)
		s++;
	res = ft_calloc(s + 1, sizeof(char));
	if (res == NULL)
		return (NULL);
	if (n < 0)
		res[0] = '-';
	if (n == 0)
		res[0] = '0';
	else
		comp_num(res, num, s - 1);
	return (res);
}
