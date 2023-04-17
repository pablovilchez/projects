/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:11:37 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/13 13:08:12 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	res;

	res = 1;
	while (*str != 0)
	{
		if ((*str < 'a' || *str > 'z'))
			res = 0;
		str++;
	}
	return (res);
}

/*
int	main(void)
{
	int		res;
	char	*str;

	str = "fghshgsgs";
	res = ft_str_is_lowercase(str);
	printf("%i", res);
	return (0);
}
*/