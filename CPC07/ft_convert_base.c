/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuki <yuuki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 09:27:21 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/24 11:37:50 by yuuki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	convert_char_base_to_2(char *convert_char, char *base_to);
void	convert_char_base_to_1(char *str, int decimal, int *nums, int digit);
char	*base_to_mem_alloc(int decimal_num, int int_base_to, int *digit);
int		convert_int_decimal(char *str, char *base_from, int base_n_f, int len);
void	nbr_input(char *convert_str, char **strs, int i, int *nums);

/*
nums[0] = length of nbr
*/
char	*convert_str_mem_alloc(char *str, int i, char *base_from, int *nums)
{
	char	*heap;
	int		j;
	int		size;

	j = 0;
	size = 0;
	while (str[i] != '\0')
	{
		while (base_from[j] != '\0')
		{
			if (str[i] == base_from[j])
			{
				i++;
				size++;
				j = 0;
				break ;
			}
			j++;
		}
		if (j != 0)
			break ;
	}
	nums[0] = size;
	heap = (char *)malloc(sizeof(char) * size + 2);
	return (heap);
}

int	str_valid_check(char *str, int *i, int minus_count)
{
	while (str[*i] != '\0')
	{
		if ((0x09 <= str[*i] && str[*i] <= 0x0d) || str[*i] == 0x20)
			++*i;
		else
			break ;
	}
	while (str[*i] != '\0')
	{
		if (str[*i] == 0x2b)
			++*i;
		else if (str[*i] == 0x2d)
		{
			minus_count *= -1;
			++*i;
		}
		else
			break ;
	}
	return (minus_count);
}

/*
nums[1] = base number of base_from
nums[2] = base number of base_to
*/
int	base_invalid_check(char *base, int *nums, int s)
{
	int	i;
	int	j;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (1);
	while (base[i] != '\0')
	{
		if (base[i] == 0x2b || base[i] == 0x2d)
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
	nums[s] = i;
	return (0);
}

/*
strs[0] = nbr
strs[1] = base_from
strs[2] = base_to
---
nums[0] = length of valid_num
nums[1] = base number of base_from
nums[2] = base number of base_to
nums[3] = minus_count
*/
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	**strs;
	int		nums[4];
	char	*convert_str;
	int		minus_count;
	int		i;

	strs = (char **)malloc(sizeof(char *) * 4);
	strs[0] = nbr;
	strs[1] = base_from;
	strs[2] = base_to;
	if (base_invalid_check(base_from, nums, 1) == 1
		|| base_invalid_check(base_to, nums, 2) == 1)
		return (NULL);
	i = 0;
	minus_count = 1;
	minus_count = str_valid_check(nbr, &i, minus_count);
	nums[3] = minus_count;
	convert_str = convert_str_mem_alloc(nbr, i, base_from, nums);
	nbr_input(convert_str, strs, i, nums);
	return (convert_str);
}
/*
int	main()
{
	char nbr[] = "    +++--+---+ww	awwwwwa4rwat";
	char base_from[] = "w	a4";
	char base_to[] = "xyza";
	char *rtn_str;

	rtn_str = ft_convert_base(nbr, base_from, base_to);
	printf("nbr       = %s\n", nbr);
	printf("base_from = %s\n", base_from);
	printf("base_to   = %s\n", base_to);
	printf("answer    = %s\n", rtn_str);

	return 0;
}
*/
