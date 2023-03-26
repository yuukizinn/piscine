/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_init_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasaki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 22:35:14 by tmasaki           #+#    #+#             */
/*   Updated: 2021/09/19 22:35:17 by tmasaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

int	count_dictsize(char *buf)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (buf[i] != '\0')
	{
		while (buf[i] == '\n')
			i++;
		count++;
		while (buf[i] != '\n' && buf[i] != '\0')
			i++;
	}
	if (buf[i - 1] == '\n')
		count -= 1;
	return (count);
}

int	ft_isspace(char c)
{
	if (c == '\t')
		;
	else if (c == '\v')
		;
	else if (c == '\f')
		;
	else if (c == '\r')
		;
	else if (c == ' ')
		;
	else
		return (0);
	return (1);
}

char	*put_dict_index_0(int i, t_dict *dict)
{
	dict[i].index = (char *)malloc(sizeof(char) * (2));
	dict[i].index[0] = '0';
	dict[i].index[1] = '\0';
	return (dict[i].index);
}
