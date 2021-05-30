/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlow <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 14:39:25 by wlow              #+#    #+#             */
/*   Updated: 2021/05/30 14:53:36 by lzheng-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	*fake_ans(char *num, char ans[16])
{
	char	box[5][5];
	char	i;
	char	j;
	char	k;

	solve_func(num, box);
	j = 1;
	k = 0;
	while (j < 5)
	{
		i = 1;
		while (i < 5)
		{
			ans[k] = box[j][i];
			k++;
			i++;
		}
		j++;
		k++;
	}
	return (ans);
}

void	empty_array(char tab[6][6])
{
	int	i;
	int	j;

	j = 0;
	while (j < 6)
	{
		i = 0;
		while (i < 6)
		{
			tab[i][j] = ' ';
			i++;
		}
		j++;
	}
}

void	init_table(char tab[6][6], char *num)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	while (i < 5)
		tab[i++][0] = num[j++];
	i = 1;
	while (i < 5)
		tab[i++][5] = num[j++];
	i = 1;
	while (i < 5)
		tab[0][i++] = num[j++];
	i = 1;
	while (i < 5)
		tab[5][i++] = num[j++];
}

void	merge_table(char tab[6][6], char ans[16])
{
	int	i;
	int	j;
	int	k;

	k = 0;
	j = 1;
	while (j < 5)
	{
		i = 1;
		while (i < 5)
		{
			tab[i][j] = ans[k];
			k++;
			i++;
		}
		j++;
	}
}

void	put_table(char tab[6][6])
{
	int	i;
	int	j;

	j = 0;
	while (j < 6)
	{
		i = 0;
		while (i < 6)
		{
			if (tab[i][j] != ' ')
				ft_putchar(tab[i][j] + 48);
			else
				ft_putchar(tab[i][j]);
			ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

int	comp_sky(char *num, char *ans)
{
	char	table[6][6];
	char	answer[16];

	answer[0] = 0;
	table [0][0] = 0;
	empty_array(table);
	init_table(table, num);
	merge_table(table, fake_ans(answer));
	put_table(table);
	return (1);
}
