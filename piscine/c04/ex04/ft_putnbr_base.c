#include <unistd.h>

void	ft_rec(int nbr, char *base, unsigned int j)
{
	unsigned int	n;
	int				c;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * -1;
	}
	else
		n = nbr;
	if (n >= j)
		ft_rec(n / j, base, j);
	c = base[n % j];
	write(1, &c, 1);
}

int	ft_putnbr_baseF(int nbr, char *base)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (base[j] != '\0')
	{
		if (base[j] == '+' || base[j] == '-' || (base[j] == base[i] && j != i))
			return (0);
		else if (base[i] == '\0')
		{
			j++;
			i = 0;
		}
		else
			i++;
	}
	if (j <= 1)
		return (0);
	ft_rec(nbr, base, j);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	ft_putnbr_baseF(nbr, base);
}
