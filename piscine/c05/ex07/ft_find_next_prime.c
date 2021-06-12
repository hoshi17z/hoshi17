int	ft_find_next_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (2);
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (ft_find_next_prime(nb + 1));
		n++;
	}
	return (nb);
}
