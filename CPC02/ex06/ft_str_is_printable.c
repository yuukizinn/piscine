/*
#include <stdio.h>
*/
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || 126 < str[i])
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
	char str1[10] = " ";
	char str2[10] = "";
	char str3[10] = "}";
	char str4[10] = "zzz";
	char str5[10] = "0";
	i = ft_str_is_printable(str1);
	printf("%d", i);
	i = ft_str_is_printable(str2);
	printf("%d", i);
	i = ft_str_is_printable(str3);
	printf("%d", i);
	i = ft_str_is_printable(str4);
	printf("%d", i);
	i = ft_str_is_printable(str5);
	printf("%d", i);
	return (0);
}
*/
