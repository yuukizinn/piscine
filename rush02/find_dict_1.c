/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_dict_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasaki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 22:37:12 by tmasaki           #+#    #+#             */
/*   Updated: 2021/09/19 22:37:15 by tmasaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

char	*find_dict_1(char c, t_dict *dict)
{
	int	i;

	i = 0;
	while (dict[i].word != NULL)
	{
		if (dict[i].index[0] == c && dict[i].index[1] == '\0')
			return (dict[i].word);
		i++;
	}
	return (NULL);
}

char	*find_dict_10(char c, t_dict *dict)
{
	int		i;
	char	str[3];

	str[0] = '1';
	str[1] = c;
	str[2] = '\0';
	i = 0;
	while (dict[i].word != NULL)
	{
		if (ft_strcmp(dict[i].index, str) == 0)
			return (dict[i].word);
		i++;
	}
	return (NULL);
}

char	*find_dict_20up(char c, t_dict *dict)
{
	int		i;
	char	str[3];

	str[0] = c;
	str[1] = '0';
	str[2] = '\0';
	i = 0;
	while (dict[i].word != NULL)
	{
		if (ft_strcmp(dict[i].index, str) == 0)
			return (dict[i].word);
		i++;
	}
	return (NULL);
}
