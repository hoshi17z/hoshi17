#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *a, char *base, int nbr, int killswitch)
{
	int	i;
	int	b[250];
	int	j;

	i = 0;
	j = -1;
	if (killswitch == -42)
	{
		while (base[i] != '\0')
			i++;
		return (i);
	}
	while (nbr >= ft_strlen("42", base, 0, -42))
	{
		b[i++] = base[nbr % ft_strlen("42", base, 0, -42)];
		nbr = nbr / ft_strlen("42", base, 0, -42);
	}
	b[i++] = base[nbr % ft_strlen("42", base, 0, -42)];
	if (killswitch == -1 && nbr != 0 )
		b[i++] = '-';
	while (i >= 0)
		a[j++] = b[i--];
	return (j);
}

int	convert(char *base, char *a, int i, int base_len)
{
	int	nbr;
	int	power;
	int	z;

	nbr = 0;
	power = 1;
	while (i >= 0)
	{
		z = 0;
		while (base[z] != '\0')
		{
			if (a[i] == base[z])
				nbr = power * z + nbr;
			z++;
		}
		power = power * base_len;
		i--;
	}
	return (nbr);
}

int	assign(char *str, char *base, int i, char *a)
{
	int	d;
	int	e;
	int	count;

	e = 0;
	count = ft_strlen(a, base, 0, -42);
	while (str[i] != '\0')
	{
		d = 0;
		while (d < count)
		{
			if (str[i] == base[d])
			{
				a[e] = str[i];
				e++;
				d = count;
			}
			else if (d == (count - 1))
				return (e);
			d++;
		}
		i++;
	}
	return (e);
}

int	check_base(char *base)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (base[j] != '\0')
	{
		if (base[j] == '+' || base[j] == '-' || (base[j] == base[i] && j != i)
			|| (base[j] >= 9 && base[j] <= 13) || base[j] == ' ')
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
	return (1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	int		k;
	char	*a;

	i = 0;
	k = 1;
	a = malloc(250);
	while (nbr[i] == ' ' || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			k = k * -1;
		i++;
	}
	if (check_base(base_from) == 0 || check_base(base_to) == 0)
		return (NULL);
	i = assign(nbr, base_from, i, a) - 1;
	i = convert(base_from, a, i, ft_strlen(a, base_from, 0, -42));
	i = ft_strlen(a, base_to, i, k);
	a[i] = '\0';
	return (a);
}
