int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	convert(char *base, char *a, int i)
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
		power = power * ft_strlen(base);
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
	count = ft_strlen(base);
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

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		k;
	char	a[250];

	i = 0;
	k = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			k = k * -1;
		i++;
	}
	if (check_base(base) == 0)
		return (0);
	i = assign(str, base, i, a) - 1;
	i = convert(base, a, i);
	return (i * k);
}
