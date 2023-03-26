/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 01:35:41 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/14 01:35:48 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char *i, *j;
	char str1[] = "ABCDEDEAA";
	char str2[] = "DEA";
	char str3[] = "ABCD";
	char str4[] = "DEF";

	printf("str1:%s\n", str1);
	printf("str2:%s\n", str2);
	printf("str3:%s\n", str3);
	printf("str4:%s\n", str4);

	i = strstr(str1, str2);
	printf("strstr str2   :%s\n", i);
	i = strstr(str1, str3);
	printf("strstr str3   :%s\n", i);
	i = strstr(str1, str4);
	printf("strstr str4   :%s\n", i);

	j = ft_strstr(str1, str2);
	printf("ft_strstr str2:%s\n", j);
	j = ft_strstr(str1, str3);
	printf("ft_strstr str3:%s\n", j);
	j = ft_strstr(str1, str4);
	printf("ft_strstr str4:%s\n", j);

	return (0);
}
*/
