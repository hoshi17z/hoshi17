#include<unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else if (nbr == -2147483648)
	{
		ft_print('-');
		ft_print('2');
		nbr = 147483648;
		ft_putnbr(nbr);
	}
	else if (nbr < 0 )
	{
		ft_print('-');
		ft_putnbr(nbr * -1);
	}
	else
		ft_print(nbr + 48);
}
