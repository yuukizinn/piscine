/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 22:36:36 by tmasaki           #+#    #+#             */
/*   Updated: 2021/09/19 22:52:46 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

static int	g_count;

int	cheack_dict(char *num, int digit, t_dict *dict)
{
	if (num[0] != '0')
	{
		if (find_dict_1(num[0], dict) == NULL)
			return (-1);
		if (find_dict_100(dict) == NULL)
			return (-1);
		g_count += 2;
	}
	if (num[1] >= '2')
	{
		if (find_dict_20up(num[1], dict) == NULL)
			return (-1);
		g_count += 1;
		if (num[2] != '0')
		{
			if (find_dict_1(num[2], dict) == NULL)
				return (-1);
			g_count += 1;
		}
	}
	if (cheack_dict_2(num, digit, dict) == 1)
		return (-1);
	return (g_count);
}

int	cheack_dict_2(char *num, int digit, t_dict *dict)
{
	if (num[1] >= '2')
		;
	else if (num[1] == '1')
	{
		if (find_dict_10(num[2], dict) == NULL)
			return (1);
		g_count += 1;
	}
	else if (num[2] != '0')
	{
		if (find_dict_1(num[2], dict) == NULL)
			return (1);
		g_count += 1;
	}
	if (digit != 1 && !(num[0] == '0' && num[1] == '0' && num[2] == '0'))
	{
		if (find_dict_1000(digit, dict) == NULL)
			return (1);
		g_count += 1;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int			i;
	static int	j;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	j++;
	if (j < g_count)
		write(1, " ", 1);
}
