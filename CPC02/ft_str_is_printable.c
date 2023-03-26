/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 23:20:52 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/10 23:20:53 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || 126 < str[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main()
{
	int i;
	char str1[10] = " ";
	char str2[10] = "";
	char str3[10] = "}";
	char str4[10] = "zzz";
	char str5[10] = "0";
	i = ft_str_is_printable(str1);
	printf("%d", i);
	i = ft_str_is_printable(str2);
	printf("%d", i);
	i = ft_str_is_printable(str3);
	printf("%d", i);
	i = ft_str_is_printable(str4);
	printf("%d", i);
	i = ft_str_is_printable(str5);
	printf("%d", i);
	return (0);
}
*/
