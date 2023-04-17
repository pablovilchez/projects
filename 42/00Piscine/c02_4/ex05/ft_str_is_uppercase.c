/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:52:00 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/13 13:08:06 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	res;

	res = 1;
	while (*str != 0)
	{
		if ((*str < 'A' || *str > 'Z'))
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

	str = "fghshSgsgs";
	res = ft_str_is_uppercase(str);
	printf("%i", res);
	return (0);
}
*/