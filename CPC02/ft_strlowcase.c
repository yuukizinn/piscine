/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 23:21:34 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/10 23:21:42 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
	char *i;
	char str1[10] = "ABCDE";
	char str2[10] = "";
	char str3[10] = "abcde";
	char str4[10] = "AaZz";
	char str5[10] = "0123";
	i = ft_strlowcase(str1);
	printf("%s\n", i);
	i = ft_strlowcase(str2);
	printf("%s\n", i);
	i = ft_strlowcase(str3);
	printf("%s\n", i);
	i = ft_strlowcase(str4);
	printf("%s\n", i);
	i = ft_strlowcase(str5);
	printf("%s\n", i);
	return (0);
}
*/
