/*
#include <stdio.h>
*/
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || ('Z' < str[i] && str[i] < 'a') || 'z' < str[i])
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
	char str1[10] = "azAZ";
	char str2[10] = "";
	char str3[10] = " ";
	char str4[10] = "AA[zzz";
	char str5[10] = "0";
	i = ft_str_is_alpha(str1);
	printf("%d", i);
	i = ft_str_is_alpha(str2);
	printf("%d", i);
	i = ft_str_is_alpha(str3);
	printf("%d", i);
	i = ft_str_is_alpha(str4);
	printf("%d", i);
	i = ft_str_is_alpha(str5);
	printf("%d", i);
	return (0);
}
*/
