#include <stdio.h>
#include <stdarg.h>

void	printint(int num, ...)
{
	va_list	arg;

	va_start(arg, num);
	while (num > 0)
	{
		printf ("%i", va_arg(arg, int));
		num--;
	}
	va_end(arg);
}

int	main(void)
{
	char	*str;
	float	num;
	int		i;
	int		*p;
	int		entero;

	str = "Pablo";
	num = 10.4;
	printf("hola %s buenas noches %f", str, 21.4);
	i = printf("\n");

	printint(3, 1, 2, 3);
	printf("\n");

	entero = 123;
	p = &entero;
	printf("%p\n", p);

	printf("%p\n", "");
	printf("%p\n", "hola");
	printf("%p\n", "j");
	return (0);
}
