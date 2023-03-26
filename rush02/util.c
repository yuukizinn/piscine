/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasaki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 22:22:34 by tmasaki           #+#    #+#             */
/*   Updated: 2021/09/19 22:22:37 by tmasaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

int	num_len(char *str, int i)
{
	int	j;

	j = 0;
	while (str[i + j] >= '0' && str[i + j] <= '9')
		j++;
	if (str[i + j] != '\0')
		return (0);
	return (j);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size_dest;
	unsigned int	size_src;

	i = 0;
	while (dest[i] != '\0')
		i++;
	size_dest = i - 1;
	j = i;
	i = 0;
	while (src[i] != '\0' && j < size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	if (src[i] != '\0')
		dest[j] = '\0';
	while (src[i] != '\0')
		i++;
	size_src = i;
	return (size_dest + size_src);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (i == size)
	{
		dest[i - 1] = '\0';
	}
	return (sizeof src);
}

void	free_dict(t_dict *dict)
{
	free(dict->index);
	free(dict->word);
	free(dict);
}

void	free_num(char **num)
{
	free(num[0]);
	free(num);
}
