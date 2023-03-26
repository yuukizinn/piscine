#include <stdio.h>

void	convert_str_nums(int *num, char *str_nums, char *base, int basenum)
{
	int	i;
	int	j;
	int magni;

	i = 0;
	while (str_nums[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (str_nums[i] == base[j])
			{
				str_nums[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
	magni = 1;
	while (0 <= --i)
	{
		*num += (str_nums[i]) * magni;
		magni *= basenum;
	}
}


void	str_num_check(char *str, int *i, char *base, char *str_nums)
{
	int		j;
	int		k;

	k = 0;
	while (str[*i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (str[*i] == base[j])
			{
				str_nums[k] = str[*i];
				break ;
			}
			j++;
		}
		if (str_nums[k] == '\0')
			return ;
		else
			k++;
		++*i;
	}
}

void	str_valid_check(char *str, int *i, int *operator)
{
	while (str[*i] != '\0')
	{

		if ((0x09 <= str[*i] && str[*i] <= 0x0d) || str[*i] == 0x20)
			++*i;
		else if (str[*i] == 0x2b)
			++*i;
		else if (str[*i] == 0x2d)
		{
			*operator *= -1;
			++*i;
		}
		else
			return ;
	}
}

int	base_invalid_check(char *base, int *basenum)
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
	*basenum = i;
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int		basenum;
	int		i;
	int		operator;
	char	str_nums[35];
	int		ans;

	basenum = 0;
	if (base_invalid_check(base, &basenum) != 0)
		return (0);
	i = 0;
	operator = 1;
	str_valid_check(str, &i, &operator);
	str_num_check(str, &i, base, str_nums);
	ans = 0;

	convert_str_nums(&ans, str_nums, base, basenum);
	ans *= operator;
	return (ans);
}

int main()
{
	int i, j, k, l, m;
	char str1[] = "\t\n\v\f\r+-+---+dv4843647+44";
	char x[] = "iedlogtrfv";

	i = ft_atoi_base(str1, x);
	printf("%d\n", i);
	return 0;
}
