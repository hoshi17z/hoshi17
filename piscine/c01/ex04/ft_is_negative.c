#include <unistd.h>

void	ft_print(char c)
{	
	write (1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
		ft_print('P');
	else if (n < 0)
		ft_print('N');
}
