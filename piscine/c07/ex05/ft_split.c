#include <stdlib.h>

int	check_charset(char *str, char *charset, int i)
{
	int	j;

	j = 0;
	while (charset[j] != '\0')
	{
		if (str[i] == charset[j])
			return (0);
		j++;
	}
	return (1);
}

char	*assign_word(char *str, char *charset, int move)
{
	int		count;
	char	*word;

	count = 0;
	while (check_charset(str, charset, move) == 1 && str[move] != '\0')
	{
		move++;
		count++;
	}
	word = (char *)malloc(sizeof(char) * (count + 1));
	move = move - count;
	count = 0;
	while (check_charset(str, charset, move) == 1 && str[move] != '\0')
		word[count++] = str[move++];
	word[count] = '\0';
	return (word);
}

int	word_move(char *str, char *charset, int z)
{
	int	move;
	int	count;

	move = 0;
	count = 0;
	while (check_charset(str, charset, move) == 0)
		move++;
	while (count < z)
	{
		while (check_charset(str, charset, move) == 1)
			move++;
		if (check_charset(str, charset, move) == 0)
			count++;
		while (check_charset(str, charset, move) == 0)
			move++;
	}
	return (move);
}

int	word_count(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (check_charset(str, charset, i) == 0)
		i++;
	while (str[i] != '\0')
	{
		if (check_charset(str, charset, i) == 1)
			count++;
		while (check_charset(str, charset, i) == 1 && str[i] != '\0')
			i++;
		while (check_charset(str, charset, i) == 0 && str[i] != '\0')
			i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		z;
	char	**sen;
	int		wc;
	int		move;

	wc = word_count(str, charset);
	sen = (char **)malloc(sizeof(char *) * (wc + 1));
	if (sen == NULL)
		return (NULL);
	z = 0;
	while (z < wc)
	{
		move = word_move(str, charset, z);
		sen[z] = assign_word(str, charset, move);
		z++;
	}
	sen[z] = 0;
	return (sen);
}
