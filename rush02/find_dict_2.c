/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_dict_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasaki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 22:26:23 by tmasaki           #+#    #+#             */
/*   Updated: 2021/09/19 22:30:19 by tmasaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

char	*find_dict_100(t_dict *dict)
{
	int	i;

	i = 0;
	while (dict[i].word != NULL)
	{
		if (ft_strcmp (dict[i].index, "100") == 0)
			return (dict[i].word);
		i++;
	}
	return (NULL);
}

char	*find_dict_1000(int digit, t_dict *dict)
{
	int		i;
	int		num_len;
	char	*str;
	char	*word;

	num_len = (digit - 1) * 3 + 1;
	str = (char *)malloc(sizeof(char) * (num_len + 1));
	if (str == NULL)
		return (NULL);
	str[0] = '1';
	i = 1;
	while (i < num_len)
	{
		str[i] = '0';
		i++;
	}
	str[i] = '\0';
	word = find_dict_1000_while(dict, str);
	free(str);
	if (word == NULL)
		return (NULL);
	return (word);
}

char	*find_dict_1000_while(t_dict *dict, char *str)
{
	int	i;

	i = 0;
	while (dict[i].word != NULL)
	{
		if (ft_strcmp (dict[i].index, str) == 0)
			return (dict[i].word);
		i++;
	}
	return (NULL);
}

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else if (s1[i] == '\0')
		return (-1);
	else
		return (1);
}
