#include<unistd.h>

void	ft_print(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a != '9' || b != '8')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	char	y;
	char	z;

	y = '(' - 40;
	while (y <= 98)
	{
		z = y + 1;
		while (z <= 99)
		{	
			ft_print(y / 10 + 48, (y % 10) + 48, z / 10 + 48, (z % 10) + 48);
			z++;
		}
		y++;
	}
}
