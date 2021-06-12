#include <unistd.h>

void	ft_print(char c)
{	
	write (1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	apb;

	apb = 'a';
	while (apb <= 'z')
	{
		ft_print(apb);
		apb++;
	}
}
