/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 09:17:26 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/23 09:17:27 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*heap;

	if (min >= max)
		return (NULL);
	heap = (int *)malloc(sizeof(int) * (max - min));
	if (heap == NULL)
		return (NULL);
	i = 0;
	while (min + i < max)
	{
		heap[i] = min + i;
		i++;
	}
	return (heap);
}
/*
int main()
{
	int *test;

	int min = 5;
	int max = 35;
	printf("min = %d\n", min);
	printf("min = %d\n", max);

	test = ft_range(min, max);
	int i = 0;
	while (test[i] != '\0')
	{
		printf("ft_range = %d\n", test[i]);
		i++;
	}
	return 0;
}
*/
