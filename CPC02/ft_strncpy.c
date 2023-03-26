/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 23:18:34 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/10 23:31:15 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main()
{
	char str1[10] = "ABCDEF";
	char str2[10] = "123456";

	printf("str1:%s\n", str1);
	printf("str2:%s\n", str2);
	//strncpy(str1, str2, 3);
	ft_strncpy(str1, str2, 3);
	printf("str1:%s\n", str1);
	printf("str2:%s\n", str2);
	return (0);
}

