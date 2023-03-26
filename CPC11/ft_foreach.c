/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:49:29 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/23 13:49:30 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
void	print_num(int nb)
{
	printf("%d\n", nb);
}

int	main()
{
	int tab[] = {50, 34, 13, 54, 66, 44};
	ft_foreach(tab, 6, &print_num);

	return 0;
}
*/
