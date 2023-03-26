/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 21:33:03 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/10 09:04:09 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	moji;

	moji = 'z';
	while (moji >= 'a')
	{
		write (1, &moji, 1);
		moji--;
	}
}
/*
int main()
{
	ft_print_reverse_alphabet();
}
*/
