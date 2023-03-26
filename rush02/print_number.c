/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasaki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 22:23:28 by tmasaki           #+#    #+#             */
/*   Updated: 2021/09/19 22:23:32 by tmasaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

int	print_number(char *num, int digit, t_dict *dict)
{
	if (num[0] != '0')
	{
		ft_putstr(find_dict_1(num[0], dict));
		ft_putstr(find_dict_100(dict));
	}
	if (num[1] >= '2')
	{
		ft_putstr(find_dict_20up(num[1], dict));
		if (num[2] != '0')
			ft_putstr(find_dict_1(num[2], dict));
	}
	else if (num[1] == '1')
		ft_putstr(find_dict_10(num[2], dict));
	else if (num[2] != '0')
		ft_putstr(find_dict_1(num[2], dict));
	if (digit != 1 && !(num[0] == '0' && num[1] == '0' && num[2] == '0'))
		ft_putstr(find_dict_1000(digit, dict));
	return (0);
}
