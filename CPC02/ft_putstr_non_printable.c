/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 23:24:25 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/12 22:29:47 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	convert_hexa_decimal(char str)
{
	char	*hexa_decimal;

	hexa_decimal = "0123456789abcdef";
	ft_putchar(hexa_decimal[str / 16]);
	ft_putchar(hexa_decimal[str % 16]);
}

int	check_src_len(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || 126 < str[i])
		{
			ft_putchar(92);
			convert_hexa_decimal(str[i]);
			i++;
		}
		ft_putchar(str[i]);
		i++;
	}
}

int main()
{
	char str1[30] = "Coucou\ntu vas	 bien ?";
	ft_putstr_non_printable(str1);
	return (0);
}

