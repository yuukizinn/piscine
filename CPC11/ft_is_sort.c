/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:52:32 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/23 13:52:34 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	rtn;

	i = 0;
	while (i < length - 1)
	{
		rtn = f(tab[i], tab[i + 1]);
		if (rtn > 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	sort_check(int x, int y)
{
	if (x < y)
		return (-1);
	else if (x == y)
		return (0);
	else
		return (1);
}

int	main()
{
	int rtn;
	int tab[6] = {20, 20, 30, 40, 50};
	rtn = ft_is_sort(tab, 5, &sort_check);
	printf("%d\n", rtn);

	return 0;
}
*/
