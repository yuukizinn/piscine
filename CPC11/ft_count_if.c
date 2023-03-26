/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:52:01 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/23 13:52:02 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int length, int(*f)(char *))
{
	int	i;
	int	rtn;
	int	count;

	i = 0;
	rtn = 0;
	count = 0;
	while (i < length)
	{
		rtn = f(tab[i]);
		if (rtn != 0)
			count++;
		i++;
	}
	return (count);
}
/*
int check_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i < 3)
		return (0);
	else
		return (1);
}

int	main()
{
	int rtn;
	char *tab[6] = {"aa", "iii", "uuu", "ee", "oo"};
	rtn = ft_count_if(tab, 5, &check_str);
	printf("%d\n", rtn);

	return 0;
}
*/
