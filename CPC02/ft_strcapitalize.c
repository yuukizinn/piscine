/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 23:21:54 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/10 23:22:09 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
void	init_lowercase(char str[], int i)
{
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	init_lowercase(str, i);
	while (str[i] != '\0')
	{
		if (('a' <= str[i] && str[i] <= 'z')
			|| ('0' <= str[i] && str[i] <= '9'))
		{
			if ('a' <= str[i] && str[i] <= 'z')
			{
				str[i] -= 32;
			}
			i++;
			while (('a' <= str[i] && str[i] <= 'z')
				|| ('0' <= str[i] && str[i] <= '9'))
			{
				i++;
			}
		}
		i++;
	}
	return (str);
}
/*
int main()
{
	char str[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("before: %s\n", str);
	ft_strcapitalize(str);
	printf("after : %s\n", str);
}
*/
