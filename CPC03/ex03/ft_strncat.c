
#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (nb > 0 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
		nb--;
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

	i = strncat(str3, str4, 2);
	j = ft_strncat(str3, str4, 2);

	printf("strncat   :%s\n", i);
	printf("ft_strncat:%s\n", j);

	return (0);
}
*/
