/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:28:58 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/19 18:29:32 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;
	long	num;

	num = (long)nb;
	if (num < 0)
	{
		num *= -1;
		write(1, "-", 1);
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		num = num % 10;
	}
	if (num < 10)
	{
		c = '0' + num;
		write(1, &c, 1);
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_show_tab(struct s_stock_str *par)
{
	unsigned long	i;
	char			size;
	int				s_size;
	int				c_size;

	i = 0;
	while (par[i].str != NULL)
	{
		size = (char)par[i].size;
		s_size = ft_strlen(par[i].str);
		c_size = ft_strlen(par[i].copy);
		write(1, par[i].str, s_size);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		write(1, par[i].copy, c_size);
		write(1, "\n", 1);
		i++;
	}
}
