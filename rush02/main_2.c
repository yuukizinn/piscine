/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 23:12:40 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/19 23:13:34 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

int	main_argc(int argc)
{
	if (argc > 3)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}

char	*main_fileopen(int argc, char **argv)
{
	char	*buf;

	buf = fileopen(argc, argv);
	if (buf == NULL)
	{
		write(1, "Dict Error\n", 11);
		return (NULL);
	}
	return (buf);
}

t_dict	*main_dict_init(char *buf)
{
	t_dict	*dict;

	dict = dict_init(buf);
	free(buf);
	if (dict == NULL)
	{
		write(1, "Dict Error\n", 11);
		return (NULL);
	}
	return (dict);
}
