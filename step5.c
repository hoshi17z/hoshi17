/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlow <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 14:39:25 by wlow              #+#    #+#             */
/*   Updated: 2021/05/30 08:12:36 by wlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	*fake_ans(char ans[16])
{
	ans[0] = 1;
	ans[1] = 2;
	ans[2] = 3;
	ans[3] = 4;
	ans[4] = 2;
	ans[5] = 3;
	ans[6] = 4;
	ans[7] = 1;
	ans[8] = 3;
	ans[9] = 4;
	ans[10] = 1;
	ans[11] = 2;
	ans[12] = 4;
	ans[13] = 1;
	ans[14] = 2;
	ans[15] = 3;
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
