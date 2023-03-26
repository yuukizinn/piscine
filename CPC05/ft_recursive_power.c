/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:04:11 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/15 18:04:13 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int main()
{
	int	x, y, z;
	x = ft_recursive_power(3, 2);
	printf("3 pow 2 = %d\n", x);
	y = ft_recursive_power(1, 0);
	printf("1 pow 0 = %d\n", y);
	z = ft_recursive_power(5, 3);
	printf("5 pow 3 = %d\n", z);
}
*/
