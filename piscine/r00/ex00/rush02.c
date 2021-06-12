/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csin-fat <sinfat@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 17:12:17 by csin-fat          #+#    #+#             */
/*   Updated: 2021/05/23 17:53:46 by lzheng-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int i, int j, int x, int y)
{
	if (i == 0 && j == 0)
		ft_putchar('A');
	else if (i == 0 && j == x - 1)
		ft_putchar('A');
	else if (i == 0 && j != 0 && j != x - 1)
		ft_putchar('B');
	else if (i != 0 && i != y - 1 && j == 0)
		ft_putchar('B');
	else if (i != 0 && i != y - 1 && j == x - 1)
		ft_putchar('B');
	else if (i == y - 1 && j == 0)
		ft_putchar('C');
	else if (i == y - 1 && j == x - 1)
		ft_putchar('C');
	else if (i == y - 1 && j != 0 && j != x - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			print(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
