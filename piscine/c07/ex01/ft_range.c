#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*str;
	int	i;

	if (min >= max)
		return (NULL);
	str = (int *)malloc(sizeof(int) * (max - min));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		str[i] = min;
		i++;
		min++;
	}
	return (str);
}
