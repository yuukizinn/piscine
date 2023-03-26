/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_init_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokubo <aokubo@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 22:35:28 by tmasaki           #+#    #+#             */
/*   Updated: 2021/09/19 22:52:35 by aokubo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

static int	g_i;
static int	g_j;
static int	g_k;

char	*put_dict_index(char *buf, t_dict *dict)
{
	int	index_size;

	while (ft_isspace(buf[g_i]))
		g_i++;
	if (buf[g_i] == '+' || buf[g_i] == '-')
		g_i++;
	if (! (buf[g_i] >= '0' && buf[g_i] <= '9'))
		return (put_dict_index_0(g_k, dict));
	index_size = g_i;
	while (buf[index_size] >= '0' && buf[index_size] <= '9')
		index_size++;
	if (buf[g_i - 1] == '-')
		index_size++;
	dict[g_k].index = (char *)malloc(sizeof(char) * (index_size - g_i + 1));
	if (dict[g_k].index == NULL)
		return (NULL);
	g_j = 0;
	if (buf[g_i - 1] == '-')
	{
		dict[g_k].index[g_j] = '-';
		g_i++;
	}
	put_dict_index_while(buf, dict);
	return (dict[g_k].index);
}

int	skip_space(char *buf)
{
	while (buf[g_i] != ':')
	{
		if (buf[g_i] == '\n')
			return (1);
		g_i++;
	}
	g_i++;
	while (buf[g_i] == ' ')
		g_i++;
	return (0);
}

char	*put_dict_word(char *buf, t_dict *dict)
{
	int	word_size;

	if (! (buf[g_i] >= 33 && buf[g_i] <= 126))
		return (NULL);
	word_size = g_i;
	while (buf[word_size] != '\n')
		word_size++;
	word_size -= g_i;
	dict[g_k].word = (char *)malloc(sizeof(char) * (word_size - 1));
	if (dict[g_k].word == NULL)
		return (NULL);
	g_j = 0;
	while (buf[g_i] != '\n' && (buf[g_i] >= 32 && buf[g_i] <= 126))
	{
		dict[g_k].word[g_j] = buf[g_i];
		g_i++;
		g_j++;
	}
	if (buf[g_i] != '\n')
		return (NULL);
	dict[g_k].word[g_j] = '\0';
	while (buf[g_i] == '\n')
		g_i++;
	return (dict[g_k].word);
}

void	put_dict_index_while(char *buf, t_dict *dict)
{
	while (buf[g_i] >= '0' && buf[g_i] <= '9')
	{
		dict[g_k].index[g_j] = buf[g_i];
		g_i++;
		g_j++;
	}
	dict[g_k].index[g_j] = '\0';
}

t_dict	*dict_init(char *buf)
{
	t_dict	*dict;

	dict = (t_dict *)malloc(sizeof(t_dict) * (count_dictsize(buf) + 1));
	if (dict == NULL)
		return (NULL);
	while (buf[g_i] == '\n')
		g_i++;
	while (buf[g_i] != '\0')
	{
		dict[g_k].index = put_dict_index(buf, dict);
		if (dict[g_k].index == NULL || skip_space(buf) == 1)
		{
			free_dict(dict);
			return (NULL);
		}
		dict[g_k].word = put_dict_word(buf, dict);
		if (dict[g_k].word == NULL)
		{
			free_dict(dict);
			return (NULL);
		}
		g_k++;
	}
	dict[g_k].word = NULL;
	return (dict);
}
