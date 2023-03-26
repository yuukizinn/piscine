/*
#include <stdio.h>
*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || 'z' < str[i])
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
	char str1[10] = "az";
	char str2[10] = "";
	char str3[10] = " ";
	char str4[10] = "AZ";
	char str5[10] = "[";
	i = ft_str_is_lowercase(str1);
	printf("%d", i);
	i = ft_str_is_lowercase(str2);
	printf("%d", i);
	i = ft_str_is_lowercase(str3);
	printf("%d", i);
	i = ft_str_is_lowercase(str4);
	printf("%d", i);
	i = ft_str_is_lowercase(str5);
	printf("%d", i);
	return (0);
}
*/
