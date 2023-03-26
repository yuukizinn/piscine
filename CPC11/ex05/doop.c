#include <stdio.h>

void	num_check(char str[], int *i, char str_nums[], int *j)
{
	while (str[*i] != '\0')
	{
		if (str[*i] < 0x30 || 0x39 < str[*i])
			break;
		str_nums[*j] = str[*i];
		++*j;
		++*i;
	}
}

void	operator_check(char str[], int *i, int *operator)
{
	while (str[*i] != '\0')
	{
		if (str[*i] != 0x2b && str[*i] != 0x2d)
			break;
		if (str[*i] == 0x2d)
			*operator *= -1;
		++*i;
	}
}

void	space_check(char str[], int *i)
{
	while (str[*i] != '\0')
	{
		if (str[*i] != 0x09 && str[*i] != 0x0a && str[*i] != 0x0b
			&& str[*i] != 0x0c && str[*i] != 0x0d && str[*i] != 0x20)
			break ;
		++*i;
	}
}

int	ft_atoi(char *str)
{
	int		i;
	int		operator;
	char	str_nums[20];
	int		num;
	int		j;

	i = 0;
	space_check(str, &i);
	operator = 1;
	operator_check(str, &i, &operator);
	j = 0;
	num_check(str, &i, str_nums, &j);
	num = 0;
	i = 1;
	j -= 1;
	while (0 <= j)
	{
		num += (int)(str_nums[j] - '0') * i;
		i *= 10;
		j--;
	}
	num *= operator;
	return (num);
}


//--------------------


int	div(int x, int y)
{
	int	ans;

	ans = x / y;
	return (ans);
}


//void (f)(int x, int y)

void	doop(char *value1, char *value2)
{
	int	i_value1;
	int	i_value2;

	i_value1 = ft_atoi(value1);
	i_value2 = ft_atoi(value2);
	printf("%d", i_value1 + i_value2);


}


int	main(int argc, char **argv)
{
	doop("23", "65");

	return 0;
}