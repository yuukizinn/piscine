/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 09:17:16 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/23 09:17:17 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*heap;

	i = 0;
	while (src[i] != '\0')
		i++;
	heap = (char *)malloc(sizeof(char) * i + 1);
	if (heap == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		heap[i] = src[i];
		i++;
	}
	heap[i] = '\0';
	return (heap);
}
/*
int main()
{
	char	*test1;
	char	*test2;

	char	str[] = "abcdefg";
	printf("str = %s\n", str);

	test1 = ft_strdup(str);
	printf("ft_strdup = %s\n", test1);
	test2 = strdup(str);
	printf("strdup    = %s\n", test2);

	return 0;
}
*/
