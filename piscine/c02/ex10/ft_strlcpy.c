unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	s;
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	if (size == 0)
		dest[0] = 0;
	else
		dest[i] = '\0';
	s = 0;
	while (src[s] != '\0')
	{
		s++;
	}
	return (s);
}
