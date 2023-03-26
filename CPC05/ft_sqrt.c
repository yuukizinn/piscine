/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:04:30 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/15 18:04:32 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb > 0)
	{
		while (i < nb / i)
			i++;
		if (i * i == nb)
			return (i);
	}
	return (0);
}
/*
int main()
{
	int	x, y, z;
	x = ft_sqrt(9);
	printf("13 sqrt = %d\n", x);
	y = ft_sqrt(7);
	printf("-1 sqrt = %d\n", y);
	z = ft_sqrt(25);
	printf("25 sqrt = %d\n", z);
}
*/
