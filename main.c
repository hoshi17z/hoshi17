/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlow <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 10:08:26 by wlow              #+#    #+#             */
/*   Updated: 2021/05/30 07:47:23 by wlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	show_error(void);
int		get_input(char *str, char *num);
int		comp_sky(char *num, char *ans);
char	*fake_ans(char *ans);

int	main(int argc, char **argv)
{
	char	edge_num[16];
	char	ans[16];

	ans[0] = 0;
	edge_num[0] = 0;
	if (argc != 2)
	{
		show_error();
		return (0);
	}
	if (!get_input(argv[1], edge_num))
	{
		show_error();
		return (0);
	}
	else
		comp_sky(edge_num, fake_ans(ans));
	return (0);
}
