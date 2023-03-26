#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	convert_char_base_to_2(char *convert_char, char *base_to)
{
	int	i;

	i = 0;
	if (convert_char[i] == '-')
		i++;
	while (convert_char[i] != '\0')
	{
		convert_char[i] = base_to[convert_char[i] - '0'];
		i++;
	}
	convert_char[i] = '\0';
}

/*
nums[2] = base number of base_to
nums[3] = minus_count
*/
void	convert_char_base_to_1(char *str, int decimal, int *nums, int digit)
{
	int	i;
	int	magni;

	magni = 1;
	while (digit-- > 0)
		magni *= nums[2];
	i = 0;
	if (nums[3] < 0)
	{
		str[i] = '-';
		i++;
	}
	while (magni != 0)
	{
		str[i] = (decimal / magni) + '0';
		decimal -= (decimal / magni) * magni;
		magni /= nums[2];
		i++;
	}
}

char	*base_to_mem_alloc(int decimal_num, int int_base_to, int *digit)
{
	char	*heap;

	while (decimal_num >= int_base_to)
	{
		decimal_num /= int_base_to;
		++*digit;
		if (decimal_num == 0)
			break ;
	}
	heap = (char *)malloc(sizeof(char) * *digit);
	return (heap);
}

int	convert_int_decimal(char *str, char *base_from, int base_n_f, int len)
{
	int	i;
	int	j;
	int	num;
	int	magni;

	i = len - 1;
	num = 0;
	magni = 1;
	while (i > 0)
	{
		j = 0;
		while (base_from[j] != '\0')
		{
			if (str[i] == base_from[j])
			{
				num += (j * magni);
				magni *= base_n_f;
			}
			j++;
		}
		i--;
	}
	return (num);
}

/*
strs[0] = nbr
strs[1] = base_from
strs[2] = base_to
---
nums[0] = length of nbr
nums[1] = base number of base_from
nums[2] = base number of base_to
*/
void	nbr_input(char *convert_str, char **strs, int i, int *nums)
{
	int		j;
	int		digit;
	int		decimal_num;
	char	*convert_char;

	j = 0;
	while (j < nums[0])
	{
		convert_str[j] = strs[0][i];
		i++;
		j++;
	}
	decimal_num = convert_int_decimal(convert_str, strs[1], nums[1], nums[0]);
	free(convert_str);
	digit = 1;
	convert_char = base_to_mem_alloc(decimal_num, nums[2], &digit);
	convert_char_base_to_1(convert_char, decimal_num, nums, digit - 1);
	convert_char_base_to_2(convert_char, strs[2]);
}
