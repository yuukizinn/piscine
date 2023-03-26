/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 23:12:17 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/19 23:13:14 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

static int	g_digit;
static int	g_len;

int	main(int argc, char **argv)
{
	char	*buf;
	t_dict	*dict;
	char	**num;

	if (main_argc(argc) == 1)
		return (1);
	buf = main_fileopen(argc, argv);
	if (buf == NULL)
		return (1);
	dict = main_dict_init(buf);
	if (dict == NULL)
		return (1);
	num = main_sp_thousand(dict, argv, argc);
	if (num == NULL)
		return (1);
	if (main_check_dict(num, dict, g_digit) == 1)
		return (1);
	if (main_print_number(num, dict, g_digit) == 1)
		return (1);
	if (cheack_dict(num[0], 0, dict) == 0)
		ft_putstr(find_dict_1('0', dict));
	write(1, "\n", 1);
	free_dict(dict);
	free_num(num);
	return (0);
}

char	**split_thousand(char *str)
{
	int		i;
	int		j;
	char	**num;

	num = split_thousand_2(str);
	if (num == NULL)
		return (NULL);
	i = g_len % 3;
	if (g_len % 3 == 0)
		i += 3;
	j = 1;
	while (j < g_len / 3 + 1)
	{
		num[j] = (char *)malloc(sizeof(char) * 4);
		if (num[j] == NULL)
		{
			free_num(num);
			return (NULL);
		}
		ft_strlcpy(num[j], &str[i], 4);
		i += 3;
		j++;
	}
	num = split_thousand_3(num, j);
	return (num);
}

char	**split_thousand_2(char *str)
{
	int		i;
	char	**num;

	i = 0;
	g_len = num_len(str, i);
	if (g_len == 0)
		return (NULL);
	num = (char **)malloc(sizeof(char *) * (g_len / 3 + 2));
	if (num == NULL)
		return (NULL);
	num[0] = (char *)malloc(sizeof(char) * (4));
	if (num[0] == NULL)
	{
		free_num(num);
		return (NULL);
	}
	if (g_len % 3 != 0)
	{
		ft_strlcpy(num[0], "000", 4 - g_len % 3);
		ft_strlcat(num[0], str, 4);
	}
	else
		ft_strlcpy(num[0], str, 4);
	return (num);
}

char	**split_thousand_3(char **num, int j)
{
	if (g_len % 3 == 0)
		j -= 1;
	num[j] = NULL;
	g_digit = j;
	return (num);
}
