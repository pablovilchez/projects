#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int	main(void)
{
	int		file;
	int		fd;
	char	*buffer;
	size_t	buf_tam;

	buf_tam = 100;
	buffer = NULL;
	buffer = calloc(buf_tam + 1, sizeof(char));
	file = open("file.txt", O_RDONLY);
	if (file < 0)
	{
		printf("Error opening file.\n");
		return (1);
	}
	fd = buf_tam;
	while (fd != 0)
	{
		fd = read(file, buffer, buf_tam);
		printf("%s\n", buffer);
		printf("%i\n", fd);
	}
	close(file);
	return (0);
}