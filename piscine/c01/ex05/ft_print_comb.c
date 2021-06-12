#include<unistd.h>

void	ft_print(char f, char g, char h)
{
	write(1, &f, 1);
	write(1, &g, 1);
	write(1, &h, 1);
	if (f != '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '9' )
	{
		b = a;
		while (b <= '9')
		{	
			c = b;
			while (c <= '9')
			{
				if (a != b && b != c && c != a)
					ft_print(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
