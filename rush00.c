/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazizan <mazizan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 09:48:57 by mazizan           #+#    #+#             */
/*   Updated: 2021/05/23 12:13:41 by mazizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	build(x, y, column, row)
{
	if ((row == 1 || row == y) && (column == 1 || column == x))
	{
		ft_putchar('o');
	}
	else if ((row == 1 || row == y) && (column > 1 && column < x))
	{
		ft_putchar('-');
	}
	else if ((row > 1 || row < y) && (column == 1 || column == x))
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(x, y)
{
	int		column;
	int		row;

	if (x != 0 || y != 0)
	{
		row = 1;
		while (row <=y)
		{
			column = 1;
			while (column <= x)
			{
				build(x, y, column, row);
				column++;
			}
			ft_putchar('\n');
			row++;
		}
	}
}
