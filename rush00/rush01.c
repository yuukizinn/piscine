/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 12:35:45 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/05 12:35:58 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void 	print_mark(int col, int row, int width, int height)
{
	if (row == 1 && col == 1)
		ft_putchar('/');
	else if (row == 1 && col == width)
		ft_putchar('\\');
	else if (row == height && col == 1)
		ft_putchar('\\');
	else if (row == height && col == width)
		ft_putchar('/');
	else if (2 <= row && row <= height -1)
	{
		if (2 <= col && col <= width -1)
			ft_putchar(' ');
		else
			ft_putchar('*');
	}
	else
	{
		ft_putchar('*');
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
