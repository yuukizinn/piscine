/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuki <yuuki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 22:37:37 by yuuki             #+#    #+#             */
/*   Updated: 2021/09/07 12:05:23 by yuuki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_is_negative(int n)
{
    char minus;
    char plus;

    minus = 'N';
    plus = 'P';

    if (n < 0)
        write(1, &minus, 1);
    else
        write(1, &plus, 1);
}
