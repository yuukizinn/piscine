/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 10:25:12 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/05 10:25:24 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void 	print_first(int width)
{
	int	col;

	col = 1;
	while (col <= width)
	{
		if (col == 1 || col == width)
			ft_putchar('A');
		else
			ft_putchar('B');
		col++;
	}
}

void	print_intermediate(int width)
{
	int	col;

	col = 1;
	while (col <= width)
	{
		if (col == 1 || col == width)
			ft_putchar('B');
		else
			ft_putchar(' ');
		col++;
	}
}

void	print_last(int width)
{
	int	col;

	col = 1;
	while (col <= width)
	{
		if (col == 1 || col == width)
			ft_putchar('C');
		else
			ft_putchar('B');
		col++;
	}
}

void 	rush(int width, int height)
{
	int	row;

	row = 1;
	while (row <= height)
	{
		if (row == 1)
			print_first(width);
		else if (row == height)
			print_last(width);
		else
			print_intermediate(width);
		row++;
		ft_putchar('\n');
	}
}
