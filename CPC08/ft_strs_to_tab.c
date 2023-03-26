/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:28:02 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/19 18:28:04 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			str_size;
	t_stock_str	*heap;

	heap = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (heap == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		heap[i].size = ft_strlen(av[i]);
		heap[i].str = av[i];
		str_size = ft_strlen(heap[i].str) + 1;
		heap[i].copy = (char *)malloc(sizeof(char) * str_size);
		if (heap[i].copy == NULL)
			return (NULL);
		ft_strcpy(heap[i].copy, heap[i].str);
		i++;
	}
	heap[i].size = 0;
	heap[i].str = 0;
	heap[i].copy = 0;
	return (heap);
}
