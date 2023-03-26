/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyumi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 12:09:40 by kyumi             #+#    #+#             */
/*   Updated: 2021/09/05 12:13:01 by kyumi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void 	print_mark(int col, int row, int width, int height)
{
	if (row == 1 && col == 1)
		ft_putchar('A');
	else if (row == 1 && col == width)
		ft_putchar('C');
	else if (row == height && col == 1)
		ft_putchar('C');
	else if (row == height && col == width)
		ft_putchar('A');
	else if (2 <= row && row <= height -1)
	{
		if (2 <= col && col <= width -1)
			ft_putchar(' ');
		else
			ft_putchar('B');
	}
	else
	{
		ft_putchar('B');
	}
}

void 	rush(int width, int height)
{
	int	row;
	int	col;

	row = 1;
	while (row <= height)
	{
		col = 1;
		while (col <= width)
		{
			print_mark(col, row, width, height);
			col = col + 1;
		}
		row = row + 1;
		ft_putchar('\n');
	}
}
