void	ft_print(char block[6][6])
{
	int		x;
	int		y;
	char	c;

	x = 1;
	while (x < 5)
	{
		y = 1;
		while (y < 5)
		{
			c = block[x][y];
			write(1, &c, 1);
			y++;
		}
		x++;
		write(1, "\n", 1);
	}
}