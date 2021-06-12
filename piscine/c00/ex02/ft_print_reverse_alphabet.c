#include <unistd.h>

void	ft_print(char c)
{	
	write (1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	rapb;

	rapb = 'z';
	while (rapb >= 'a')
	{
		ft_print(rapb);
		rapb--;
	}
}
