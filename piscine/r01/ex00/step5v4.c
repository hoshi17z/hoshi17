/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step5v4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlow <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 14:39:25 by wlow              #+#    #+#             */
/*   Updated: 2021/05/30 19:52:02 by lzheng-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
char	**solve_func(char *num, char box[5][5]);

char	*fake_ans(char *num, char *ans)
{
	char	box[5][5];
	char	col;
	char	row;
	char	i;

	solve_func(num, box);
	i = 0;
	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			ans[i] = box[row][col];
			i++;
			col++;
		}
		row++;
	}
	return (ans);
}

void	merge_table(char tab[4][4], char ans[16])
{
	int	col;
	int	row;
	int	k;

	k = 0;
	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			tab[row][col] = ans[k];
			k++;
			col++;
		}
		row++;
	}
}

void	put_table(char tab[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			ft_putchar(tab[row][col] + 48);
			if (col < 3)
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}

int	comp_sky(char *clue)
{
	char	table[4][4];
	char	answer[16];

	answer[0] = 0;
	table [0][0] = 0;
	merge_table(table, fake_ans(clue, answer));
	put_table(table);
	return (1);
}
