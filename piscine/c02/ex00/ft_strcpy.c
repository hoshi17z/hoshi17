char	*ft_strcpy(char *dest, char *src)
{
	char	*a;

	a = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (a);
}	
