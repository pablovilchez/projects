/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:58:00 by pvilchez          #+#    #+#             */
/*   Updated: 2023/02/14 13:06:04 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	res;

	res = 1;
	while (*str != 0)
	{
		if ((*str < ' ') && *str != 127)
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
	res = ft_str_is_printable(str);
	printf("%i", res);
	return (0);
}
*/