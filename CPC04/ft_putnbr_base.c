/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 07:13:17 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/15 07:13:24 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	convert_basenbr(long num, char *base, int basenum)
{
	if (num >= basenum)
	{
		convert_basenbr(num / basenum, base, basenum);
		convert_basenbr(num % basenum, base, basenum);
	}
	else
		write (1, &base[num], 1);
}

int	ft_strlen(char *base)
{
	int	len;

	len = 0;
	while (base[len] != '\0')
		len++;
	return (len);
}

int	invalid_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[i] == '\0')
		return (1);
	if (base[i + 1] == '\0')
		return (1);
	while (base[i] != '\0')
	{
		if (base[i] == 0x2b || base[i] == 0x2d)
			return (1);
		if (base[i] <= 0x20 || 0x7f <= base[i])
			return (1);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	num;
	int		basenum;

	if (invalid_check(base) != 0)
		return ;
	basenum = ft_strlen(base);
	num = (long)nbr;
	if (num < 0)
	{
		num *= -1;
		write(1, "-", 1);
	}
	convert_basenbr(num, base, basenum);
}
/*
int main()
{
	char hexa_decimal[] = "0123456789ABCDEF";
	char decimal[] = "0123456789";
	char octal[] = "poneyvif";
	char binary[] = "01";
	char x[] = "01234";

	int num1 = 2147483647;
	int num2 = -2147483648;
	int num3 = +42;
	int num4 = 42;
	int num5 = 10;

	ft_putnbr_base(num1, hexa_decimal);
	printf("\n");
	ft_putnbr_base(num2, decimal);
	printf("\n");
	ft_putnbr_base(num3, octal);
	printf("\n");
	ft_putnbr_base(num4, binary);
	printf("\n");
	ft_putnbr_base(num5, x);
	return 0;
}
*/
