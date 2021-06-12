void	ft_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_lower(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[0] -= 32;
			else if (str[i - 1] < '0' || str[i - 1] > '9')
				str[i] = str[i] - 32;
			i++;
			while (str[i] >= 'a' && str[i] <= 'z')
			{
				i++;
			}
			i--;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>

int main(void)
{
	char a[] = {"asasas asas 4as a"};
	
	printf("%s", ft_strcapitalize(a));
}
