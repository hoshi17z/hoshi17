/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   step1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlow <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 11:38:28 by wlow              #+#    #+#             */
/*   Updated: 2021/05/30 06:52:31 by wlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *str);

void	show_error(void)
{
	ft_putstr("ERROR 404!\n");
}

int	check_input(char *num)
{
	int	i;
	int	j;
	int	flag1;

	i = 0;
	while (i < 13)
	{
		if ((num[i] + num[i + 1] + num [i + 2] + num [i + 3]) > 10)
			return (0);
		flag1 = 0;
		j = 0;
		while (j < 4)
		{
			if (num[i + j++] == 1)
				flag1++;
		}
		if (flag1 > 1)
			return (0);
		i += 4;
	}
	return (1);
}

int	get_input(char *str, char *num)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			num[j] = str[i] - 48;
			j++;
		}
		i++;
	}
	if (j == 16 && (check_input(num)))
	{
		num[j] = '\0';
		return (1);
	}
	else
		return (0);
}
