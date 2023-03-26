
#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	char *i, *j;
	char str3[15] = "ABC";
	char str4[50] = "12345";

	printf("str1:%s\n", str3);
	printf("str2:%s\n", str4);

	i = strcat(str3, str4);
	// j = ft_strcat(str3, str4);

	printf("strcat   :%s\n", i);
	// printf("ft_strcat:%s\n", j);

	return (0);
}
*/
