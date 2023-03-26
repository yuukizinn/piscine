/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:28:54 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/10 09:05:00 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	count_up(char str[])
{
	if (str[2] < '9')
	{
		str[2]++;
	}
	else if (str[1] < '8')
	{
		str[1]++;
		str[2] = str[1] + 1;
	}
	else if (str[0] < '7')
	{
		str[0]++;
		str[1] = str[0] + 1;
		str[2] = str[1] + 1;
	}
}

void	ft_print_comb(void)
{
	char	str[3];
	char	comma_blank[2];

	str[0] = '0';
	str[1] = '1';
	str[2] = '2';
	comma_blank[0] = ',';
	comma_blank[1] = ' ';
	while (1)
	{
		write(1, str, 3);
		if (str[0] == '7' && str[1] == '8' && str[2] == '9')
			break ;
		else
			write(1, comma_blank, 2);
		count_up(str);
	}
}
/*
int main()
{
	ft_print_comb();
}
*/
