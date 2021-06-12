#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	full_len(int size, char **str, char *sep)
{
	int	i;
	int	len1;

	i = 0;
	len1 = 0;
	while (i < size)
	{
		len1 = ft_strlen(str[i]) + len1;
		i++;
	}
	return ((size - 1) * ft_strlen(sep) + len1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*sen;

	sen = (char *)malloc(sizeof(char) * (full_len(size, strs, sep) + 1));
	if (sen == NULL || size == 0)
	{
		*sen = 0;
		return (sen);
	}
	i = 0;
	j = 0;
	while (j < size)
	{
		k = 0;
		while (strs[j][k] != '\0')
			sen[i++] = strs[j][k++];
		k = 0;
		while (sep[k] != '\0' && j != size -1)
			sen[i++] = sep[k++];
		j++;
	}
	sen[i] = '\0';
	return (sen);
}

#include <stdio.h>
int main(int argc, char **argv)
{
	printf("n%s", ft_strjoin(argc, argv + 1, "."));
}
