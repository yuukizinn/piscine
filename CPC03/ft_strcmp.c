/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 22:53:25 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/12 22:53:28 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main()
{
	int i, j;
	char str1[] = "ABC";
	char str2[] = "ABC";

	printf("str1:%s\n", str1);
	printf("str2:%s\n", str2);

	i = strcmp(str1, str2);
	j = ft_strcmp(str1, str2);

	printf("strcmp   :%d\n", i);
	printf("ft_strcmp:%d\n", j);

	return (0);
}
*/
