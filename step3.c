/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzheng-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 12:54:57 by lzheng-j          #+#    #+#             */
/*   Updated: 2021/05/30 14:47:34 by lzheng-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	CPI(char *box, int a)
{
	int	c;
	int	d;

	if (a == 1)
		return (1);
	else
	{
		while (c <= 4)
		{
			d = a - 1;
			while (d > 0)
			{
				if (box[a][c] == box[d][c])
					return (0);
				d--;
			}
			c++;
		}
	}
	return (1);
}

char	solve_func(char *num, char *box)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
	while (a <= 4)
	{
		permutate_func(box, a);
		while (b <= 16)
		{
			if ((a != 4) && (CRI(box, a) == 1) && (CLI(num, box, a) == 1)
				&& (CRL(num, box, argv a) == 1))
				b = 17;
			else if ((a == 4 ) && ((CRI (box, a) == 1)
					&& (CLI(num, box, a) == 1) && (CRL(num, box, a) == 1)
					&& (CUP(num, box, a) == 1) && (CDP(num, box, a) == 1)))
				b = 17;
			else if (b == 16)
				a = a - 2;
			else
				b++;
		}
		a++;
	}
}	
