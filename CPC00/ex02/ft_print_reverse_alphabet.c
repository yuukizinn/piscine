/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuki <yuuki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 16:17:17 by yuuki             #+#    #+#             */
/*   Updated: 2021/09/05 16:17:19 by yuuki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    char moji;
    moji = 'z';
    while (moji >= 'a')
    {
        write (1, &moji, 1);
        moji--;
    }
}