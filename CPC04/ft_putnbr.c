/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 23:13:03 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/12 23:13:04 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;
	long	num;

	num = (long)nb;
	if (num < 0)
	{
		num *= -1;
		write(1, "-", 1);
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		num = num % 10;
	}
	if (num < 10)
	{
		c = '0' + num;
		write(1, &c, 1);
	}
}
/*
int     main()
{
    ft_putnbr(-2147483648);
    write(1, "\n", 1);
    ft_putnbr(2147483647);
    write(1, "\n", 1);
    ft_putnbr(0);
}
*/
