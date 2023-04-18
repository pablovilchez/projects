/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:06:04 by pvilchez          #+#    #+#             */
/*   Updated: 2023/04/18 21:26:53 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *str1, const void *str2, unsigned int n)
{
	char			*d;
	char			*s;
	unsigned int	i;

	d = str1;
	s = str2;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
