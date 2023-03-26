/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:03:26 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/15 18:03:40 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	num;

	num = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (0 < nb)
	{
		num *= nb;
		nb--;
	}
	return (num);
}
/*
int main()
{
	int x ,y, z;
	x = ft_iterative_factorial(5);
	printf("x=%d\n", x);
	y = ft_iterative_factorial(3);
	printf("y=%d\n", y);
	z = ft_iterative_factorial(6);
	printf("z=%d\n", z);
}
*/
