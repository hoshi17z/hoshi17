/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzheng-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 12:54:57 by lzheng-j          #+#    #+#             */
/*   Updated: 2021/05/30 20:38:13 by lzheng-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*permutate_table(char box[5][5], int row);
int		clen(char *num, char box[5][5], int row);
int		crin(char *num, char box[5][5], int row);
int		cupn(char *num, char box[5][5]);
int		cdwn(char *num, char box[5][5]);

int	cri(char box[5][5], int row)
{
	int	c;
	int	d;

	c = 1;
	if (row == 1)
		return (1);
	else
	{
		while (c <= 4)
		{
			d = row - 1;
			while (d > 0)
			{
				if (box[row][c] == box[d][c])
					return (0);
				d--;
			}
			c++;
		}
		return (1);
	}
}

char	*solve_func(char *num, char box[5][5])
{
	int	row;
	int	b;

	row = 1;
	b = 1;
	while (row <= 4)
	{
		permutate_table(box, row);
		while (b <= 42)
		{
			if ((row != 4) && (cri(box, row) == 1) && (clen(num, box, row) == 1)
				&& (crin(num, box, row) == 1))
				b = 43;
			else if ((row == 4) && (cri(box, row) == 1)
				&& (clen(num, box, row) == 1) && (crin(num, box, row) == 1)
				&& (cupn(num, box) == 1) && (cdwn(num, box) == 1))
				b = 43;
			else if (b == 16)
				row = row - 2;
			else
				b++;
		}
		row++;
	}
	return (*box);
}	
