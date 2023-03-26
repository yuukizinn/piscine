/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 23:13:05 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/10 23:25:55 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <string.h>
#include <stdio.h>
*/
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
/*
int main()
{
	char	str1[10] = "ABCDEFG";
	char	str2[10] = "123456";

	printf("str1:%s\n", str1);
	printf("str2:%s\n", str2);
	strcpy(str1, str2);
	// ft_strcpy(str1, str2);
	printf("str1:%s\n", str1);
	printf("str2:%s\n", str2);
	return (0);
}
*/
