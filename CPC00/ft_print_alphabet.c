/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 21:30:44 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/10 09:03:47 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	moji;

	moji = 'a';
	while (moji <= 'z')
	{
		write(1, &moji, 1);
		moji++;
	}
}
/*
int main()
{
	ft_print_alphabet();
}
*/
