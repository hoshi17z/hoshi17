#include <unistd.h>

void	ft_print(char c)
{	
	write (1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	n;

	n = '0';
	while (n <= '9')
	{
		ft_print(n);
		n++;
	}
}
