/*
#include <stdio.h>
*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || '9' < str[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main()
{
	int i;
	char str1[10] = "0123456789";
	char str2[10] = "";
	char str3[10] = " ";
	char str4[10] = "AA[2345zzz";
	char str5[10] = "e0222a";
	i = ft_str_is_numeric(str1);
	printf("%d", i);
	i = ft_str_is_numeric(str2);
	printf("%d", i);
	i = ft_str_is_numeric(str3);
	printf("%d", i);
	i = ft_str_is_numeric(str4);
	printf("%d", i);
	i = ft_str_is_numeric(str5);
	printf("%d", i);
	return (0);
}
*/
