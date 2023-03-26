/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_num_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 16:14:27 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/12 16:14:42 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 4
static int	g_show_num_list_flag = 0;
static int	g_num_list[4][4];

void	show_num_list(void);
void	next_num(int col, int row, int input[]);
int		check_number(int col, int row, int number);
int		put_number(int col, int row, int number, int input[]);
void	start(int input[]);
int		*check_visible_num(int num_list[4][4], int *result, int *input);
void	output_error(void);
void	ft_putchar(char c);

void	show_num_list(void)
{
	int		col;
	int		row;
	char	num;

	if (g_show_num_list_flag == 0)
	{
		row = 0;
		while (row < SIZE)
		{
			col = 0;
			while (col < SIZE)
			{
				num = g_num_list[row][col] + '0';
				ft_putchar(num);
				if (col != SIZE - 1)
					ft_putchar(' ');
				col++;
			}
			ft_putchar('\n');
			row++;
		}
		g_show_num_list_flag = 1;
	}
}

void	next_num(int col, int row, int input[])
{
	int	number;
	int	next_col;
	int	next_row;

	if (col + 1 >= SIZE)
	{
		next_col = 0;
		next_row = row + 1;
	}
	else
	{
		next_col = col + 1;
		next_row = row;
	}
	number = 1;
	while (number <= SIZE)
	{
		put_number(next_col, next_row, number, input);
		number++;
	}
}

int	check_number(int col, int row, int number)
{
	int	x;
	int	y;

	x = 0;
	while (x < SIZE)
	{
		if (g_num_list[row][x] == number)
			return (1);
		x++;
	}
	y = 0;
	while (y < SIZE)
	{
		if (g_num_list[y][col] == number)
			return (1);
		y++;
	}
	return (0);
}

int	put_number(int col, int row, int number, int input[])
{
	int	result[16];
	int	check_number_flag;

	check_number_flag = check_number(col, row, number);
	if (check_number_flag == 1)
		return (1);
	g_num_list[row][col] = number;
	if (col == SIZE - 1 && row == SIZE - 1)
	{
		check_visible_num(g_num_list, result, input);
	}
	else
	{
		next_num(col, row, input);
	}
	g_num_list[row][col] = 0;
	return (0);
}

void	start(int input[])
{
	int	number;

	number = 1;
	while (number <= SIZE)
	{
		put_number(0, 0, number, input);
		number++;
	}
	if (g_show_num_list_flag == 0)
		output_error();
}
