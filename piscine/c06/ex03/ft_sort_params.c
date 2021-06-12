#include <unistd.h>

void	print(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		j++;
		write(1, "\n", 1);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*k;

	j = 1;
	while (j < argc)
	{
		i = 1;
		while (i < argc - j)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				k = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = k;
			}
			i++;
		}
		j++;
	}
	print(argc, argv);
	return (0);
}
