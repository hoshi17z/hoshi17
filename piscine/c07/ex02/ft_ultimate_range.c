#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*str;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	str = (int *)malloc(sizeof(int) * (max - min));
	if (str == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		str[i] = min;
		i++;
		min++;
	}
	*range = str;
	return (i);
}
