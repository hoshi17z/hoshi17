#include<stdlib.h>

int	random_num (void)
{
	int	*p;
	int	random;

	p = (int *) malloc (sizeof(int));
	random = ((int)p % 5);
	if (random == 0)
	{
		random += 1;
	}
	else if (random == 5)
	{
		random -= 1;
	}
	free(p);
	return (random);
}
