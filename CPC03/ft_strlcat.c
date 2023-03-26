/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 01:36:00 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/14 01:38:38 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dest_len)
		return (src_len + size);
	i = 0;
	while (dest_len + i + 1 < size && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
int main()
{
	int i, j;
	char str3[30] = "012";
	char str4[30] = "123aaa88";
	int size = 2;

	i = strlcat(str3, str4, size);
	printf("strlcat     :%s\n", str3);
	printf("strlcat(len):%d\n", i);

	// j = ft_strlcat(str3, str4, size);
	// printf("ft_strlcat     :%s\n", str3);
	// printf("ft_strlcat(len):%d\n", j);

	return (0);
}
*/
