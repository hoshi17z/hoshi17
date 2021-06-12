#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dest == NULL)
		return (NULL);
	return (ft_strcpy(dest, src));
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*sen;
	int			i;

	sen = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (sen == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		(sen + i)->size = ft_strlen(av[i]);
		(sen + i)->str = av[i];
		(sen + i)->copy = ft_strdup(av[i]);
		i++;
	}
	(sen + i)->str = 0;
	return (sen);
}
