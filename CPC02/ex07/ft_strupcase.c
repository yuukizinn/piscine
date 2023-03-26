/*
#include <stdio.h>
*/
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return str;
}
/*
int main()
{
	char *i;
	char str1[10] = "abcde";
	char str2[10] = "";
	char str3[10] = "ABCDE";
	char str4[10] = "AaZz";
	char str5[10] = "0123";
	i = ft_strupcase(str1);
	printf("%s\n", i);
	i = ft_strupcase(str2);
	printf("%s\n", i);
	i = ft_strupcase(str3);
	printf("%s\n", i);
	i = ft_strupcase(str4);
	printf("%s\n", i);
	i = ft_strupcase(str5);
	printf("%s\n", i);
	return (0);
}
*/
