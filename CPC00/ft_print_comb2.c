/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:31:30 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/10 09:05:45 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_write(char str1[], char str2[])
{
	write(1, str1, 2);
	write(1, " ", 1);
	write(1, str2, 2);
}

void	count_up(char str1[], char str2[])
{
	str2[1]++;
	while (str2[1] > '9')
	{
		if (str2[1] > '9')
		{
			str2[0]++;
			str2[1] = '0';
		}
		if (str2[0] > '9')
		{
			str1[1]++;
			str2[0] = str1[0];
			str2[1] = str1[1] + 1;
		}
		if (str1[1] > '9')
		{
			str1[0]++;
			str1[1] = '0';
			str2[0] = str1[0];
			str2[1] = str1[1] + 1;
		}
	}
}

void	ft_print_comb2(void)
{
	char	st1[2];
	char	st2[2];

	st1[0] = '0';
	st1[1] = '0';
	st2[0] = '0';
	st2[1] = '0';
	while (1)
	{
		count_up(st1, st2);
		if (st1[0] == '9' && st1[1] == '8' && st2[0] == '9' && st2[1] == '9')
		{
			print_write(st1, st2);
			break ;
		}
		else
		{
			print_write(st1, st2);
			write(1, ",", 1);
			write(1, " ", 1);
		}
	}
}
/*
int main()
{
	ft_print_comb2();
}
*/
