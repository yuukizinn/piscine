/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   answer_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 16:15:19 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/12 16:15:23 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	show_num_list(void);
int		*check_visible_num(int num_list[4][4], int *result, int *input);
int		max_change_count(int num_list[4][4], int index, int d_col, int d_row);
void	set_default(int d_col, int d_row, int *default_row, int *default_col);
int		max_change_calc(int list[4][4], int def_row, int def_col, int *direct);
void	make_result(int *result, int num_list[4][4]);

int	*check_visible_num(int num_list[4][4], int *result, int *input)
{
	int	index;

	make_result(result, num_list);
	index = 0;
	while (index < 16)
	{
		if (input[index] != result[index])
			break ;
		index++;
	}
	if (index == 16)
		show_num_list();
	return (result);
}

int	max_change_count(int num_list[4][4], int index, int d_col, int d_row)
{
	int	default_col;
	int	default_row;
	int	direction[2];

	if (d_col == 0)
		default_col = index;
	else if (d_row == 0)
		default_row = index;
	set_default(d_col, d_row, &default_row, &default_col);
	direction[0] = d_col;
	direction[1] = d_row;
	return (max_change_calc(num_list, default_row, default_col, direction));
}

void	set_default(int d_col, int d_row, int *default_row, int *default_col)
{
	if (d_col == 0)
	{
		if (d_row == 1)
			*default_row = 0;
		else if (d_row == -1)
			*default_row = 3;
	}
	else if (d_row == 0)
	{
		if (d_col == 1)
			*default_col = 0;
		else if (d_col == -1)
			*default_col = 3;
	}
}

int	max_change_calc(int list[4][4], int def_row, int def_col, int *direct)
{
	int	max;
	int	loop_count;
	int	max_change;

	loop_count = 0;
	max_change = 0;
	max = 0;
	while (loop_count < 4)
	{
		if (list[def_row][def_col] > max)
		{
			max = list[def_row][def_col];
			max_change++;
		}
		def_row = def_row + direct[1];
		def_col = def_col + direct[0];
		loop_count++;
	}
	return (max_change);
}

void	make_result(int *result, int num_list[4][4])
{
	int	col;
	int	row;

	col = 0;
	row = 0;
	while (col < 4)
	{
		result[col] = max_change_count(num_list, col, 0, 1);
		result[4 + col] = max_change_count(num_list, col, 0, -1);
		col++;
	}
	while (row < 4)
	{
		result[8 + row] = max_change_count(num_list, row, 1, 0);
		result[12 + row] = max_change_count(num_list, row, -1, 0);
		row++;
	}
}
