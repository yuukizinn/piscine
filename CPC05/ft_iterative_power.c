/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:03:59 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/15 18:04:01 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	ans;

	ans = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (0 < power)
	{
		ans *= nb;
		power--;
	}
	return (ans);
}
/*
int	main()
{
	int	x, y, z;
	x = ft_iterative_power(3, 2);
	printf("3 pow 2 = %d\n", x);
	y = ft_iterative_power(1, 0);
	printf("1 pow 0 = %d\n", y);
	z = ft_iterative_power(5, 3);
	printf("5 pow 3 = %d\n", z);
}
*/
