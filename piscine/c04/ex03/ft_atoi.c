int	ft_atoi(char *str)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	k = 1;
	j = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			k = k * -1;
			i++;
		}
		else
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		j = j * 10 + str[i] - 48;
		i++;
	}
	return (j * k);
}
