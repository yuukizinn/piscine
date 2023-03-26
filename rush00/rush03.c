/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 12:43:21 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/05 12:43:34 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);

void	print_mark (int line, int col, int height, int width)
{
	if (line == 1 && col == 1)
		ft_putchar ('A');
	else if (line == 1 && col == width)
		ft_putchar ('C');
	else if (line == height && col == 1)
		ft_putchar ('A');
	else if (line == height && col == width)
		ft_putchar ('C');
	else if (2 <= line && line <= height - 1)
	{
		if (2 <= col && col <= width - 1)
			ft_putchar (' ');
		else
			ft_putchar ('B');
	}
	else
		ft_putchar ('B');
}

void	rush(int width, int height)
{
	int	line;
	int	col;

	line = 1;
	while (line <= height)
	{
		col = 1;
		while (col <= width)
		{
			print_mark (line, col, height, width);
			col = col + 1;
		}
		line = line + 1;
		ft_putchar('\n');
	}
}
