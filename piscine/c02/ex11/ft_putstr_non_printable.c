#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*base;

	base = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 126))
			write(1, &str[i], 1);
		else if (str[i] < 0)
		{
			str[i] = str[i] + 256;
			i--;
		}
		else
		{
			write(1, "\\", 1);
			write(1, &base[(str[i] / 16)], 1);
			write(1, &base[(str[i] % 16)], 1);
		}
		i++;
	}
}
