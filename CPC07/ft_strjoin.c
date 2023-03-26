/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:42:32 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/24 13:00:54 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
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

int	sum_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len = len + ft_strlen(sep) * (size - 1) + 1;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*heap;

	if (size == 0)
	{
		heap = (char *)malloc(sizeof(char));
		*heap = 0;
		return (heap);
	}
	heap = (char *)malloc(sizeof(char) * sum_len(size, strs, sep));
	if (heap == NULL)
		return (NULL);
	i = 0;
	*heap = 0;
	while (i < size)
	{
		ft_strcat(heap, strs[i]);
		if (i < size - 1)
			ft_strcat(heap, sep);
		i++;
	}
	return (heap);
}

int main()
{
	int i;
	char *test;

	char *strs[3] = {"taro", "jiro", "saburo"};
	char sep[] = "||";

	test = ft_strjoin(3, strs, sep);

	printf("%s\n", test);

	return 0;
}

