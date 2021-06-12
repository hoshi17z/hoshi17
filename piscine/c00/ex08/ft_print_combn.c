#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int i, int *a, int n)
{
	int	z;

	z = 0;
	{
		if (a[i] != n + 47)
			write(1, ", ", 2);
	}
	while (z < n)
	{
		ft_putchar(a[z]);
		z++;
	}
}

void	ft_r(int i, int *a, int n, int k)
{
	if (k < n)
	{
		a[i + 1] = a[i] + 1;
		while (a[i + 1] <= '9')
		{
			ft_r(i + 1, a, n, k + 1);
			a[i + 1] += 1;
		}
	}
	else
		ft_print(i, a, n);
	a[i + 1] += 1;
}

void	ft_print_combn(int n)
{
	int	a[10];
	int	i;
	int	k;

	i = 0;
	k = 0;
	a[i] = '0';
	if (n == 1)
	{
		while (a[0] <= '9')
		{
			ft_print(i, a, n);
			a[0]++;
		}
	}
	else if (n == 10)
		write(1, "0123456789", 10);
	else
	{
		while (a[i] <= '9' )
		{	
			ft_r(i, a, n, k + 1);
			a[i] += 1;
		}
	}
}
