#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	argc = argc - 1;
	while (argc > 0)
	{
		i = 0;
		while (argv[argc][i] != '\0')
		{
			write(1, &argv[argc][i], 1);
			i++;
		}
		argc--;
		write(1, "\n", 1);
	}
	return (0);
}
