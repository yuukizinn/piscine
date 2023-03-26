/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 09:17:36 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/23 09:17:38 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*heap;

	i = 0;
	if (min >= max)
	{
		heap = NULL;
		return (0);
	}
	heap = (int *)malloc(sizeof(int) * (max - min));
	if (heap == NULL)
		return (-1);
	while (i < max - min)
	{
		heap[i] = min + i;
		i++;
	}
	*range = heap;
	return (i);
}
/*
int main()
{
	int test;
	int *range[2];

	int min = 5;
	int max = 35;
	printf("min = %d\n", min);
	printf("min = %d\n", max);

	test = ft_ultimate_range(range, min, max);
	int i = 0;
	printf("size = %d\n", test);
	while (range[0][i] != '\0')
	{
		printf("ft_ultimate_range = %d\n", range[0][i]);
		i++;
	}
	return 0;
}
*/
