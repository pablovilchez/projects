#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

size_t	len_end(const char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i) != '\0' && *(str + i) != '\n')
		i++;
	if (*(str + i) == '\n')
		i++;
	return (i);
}

int	main(void)
{
	char	*str;

	str = "Pab\nlo";
	printf("%i\n", (int)len_end(str));
	printf("%i\n", (int)ft_strlen(str));
	return (0);
}
