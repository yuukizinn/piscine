/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:04:20 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/15 18:04:22 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int main()
{
	int	x, y, z;
	printf("fibo = 0 1 1 2 3 5 8 13 21 34 55 89 ...")
	x = ft_fibonacci(3);
	printf("fibo 3 = %d\n", x);
	y = ft_fibonacci(7);
	printf("fibo 7 = %d\n", y);
	z = ft_fibonacci(9);
	printf("fibo 9 = %d\n", z);
}
*/
