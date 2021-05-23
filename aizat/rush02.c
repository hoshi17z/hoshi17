/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazizan <mazizan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 09:48:57 by mazizan           #+#    #+#             */
/*   Updated: 2021/05/23 12:23:08 by mazizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	build(x, y, column, row)
{
	if ((row == 1 && column == 1) || (row == 1 && column == x))
	{
		ft_putchar('A');
	}
	else if ((row == y && column == 1) || (row == y && column == x))
	{
		ft_putchar('C');
	}
	else if ((row == 1 || row == y) && (column > 1 && column < x))
	{
		ft_putchar('B');
	}
	else if ((row > 1 || row < y) && (column == 1 || column == x))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
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
