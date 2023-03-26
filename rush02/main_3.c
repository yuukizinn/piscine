/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 23:12:50 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/19 23:12:51 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

char	**main_sp_thousand(t_dict *dict, char **argv, int argc)
{
	char	**num;

	num = split_thousand(argv[argc - 1]);
	if (num == NULL)
	{
		write(1, "Error\n", 6);
		free_dict(dict);
		return (NULL);
	}
	return (num);
}

int	main_check_dict(char **num, t_dict *dict, int digit)
{
	int	i;

	i = 0;
	while (num[i] != NULL)
	{
		if (cheack_dict(num[i], digit - i, dict) == -1)
		{
			write(1, "Dict Error\n", 11);
			free_dict(dict);
			free_num(num);
			return (1);
		}
		i++;
	}
	return (0);
}

int	main_print_number(char **num, t_dict *dict, int digit)
{
	int	i;

	i = 0;
	while (num[i] != NULL)
	{
		if (print_number(num[i], digit - i, dict) == 1)
		{
			write(1, "Dict Error\n", 11);
			free_dict(dict);
			free_num(num);
			return (1);
		}
		i++;
	}
	return (0);
}
