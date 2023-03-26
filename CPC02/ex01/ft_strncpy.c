/*
#include <stdio.h>
#include <string.h>
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
    return (dest);
}
/*
int main()
{
	char str1[10] = "ABCDEF";
	char str2[10] = "123456";

	printf("実行前str1:%s\n", str1);
	printf("実行前str2:%s\n", str2);
	strncpy(str1, str2, 6);
	// ft_strncpy(str1, str2, 6);
	printf("実行後str1:%s\n", str1);
	printf("実行後str2:%s\n", str2);
	return (0);
}
*/
