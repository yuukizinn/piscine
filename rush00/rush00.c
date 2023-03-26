/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 10:11:55 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/05 10:20:56 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void 	print_first_and_last(int width)
{
	int	col;

	col = 1;
	while (col <= width)
	{
		if (col == 1 || col == width)
			ft_putchar('o');
		else
			ft_putchar('-');
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
			ft_putchar('|');
		else
			ft_putchar(' ');
		col++;
	}
}

void 	rush(int width, int height)
{
	int	row;

	row = 1;
	while (row <= height)
	{
		if (row == 1 || row == height)
			print_first_and_last(width);
		else
			print_intermediate(width);
		row++;
		ft_putchar('\n');
	}
}
