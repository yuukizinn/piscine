/*
#include <stdio.h>
*/
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || 'Z' < str[i])
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
	char str1[10] = "AZ";
	char str2[10] = "";
	char str3[10] = " ";
	char str4[10] = "az";
	char str5[10] = "0";
	i = ft_str_is_uppercase(str1);
	printf("%d", i);
	i = ft_str_is_uppercase(str2);
	printf("%d", i);
	i = ft_str_is_uppercase(str3);
	printf("%d", i);
	i = ft_str_is_uppercase(str4);
	printf("%d", i);
	i = ft_str_is_uppercase(str5);
	printf("%d", i);
	return (0);
}
*/
