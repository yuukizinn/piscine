/*
#include <stdio.h>
#include <string.h>
*/
unsigned int	check_src_len(char *src)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
	{
		return (check_src_len(src));
	}
	while (i < size && src[i] != '\0')
	{
		if (i >= size - 1)
		{
			dest[i] = '\0';
			return (check_src_len(src));
		}
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
    return (check_src_len(src));
}
/*
int main()
{
	int i;
	char str1[20] = "ABCDEFGHIJKLMN";
	char str2[15] = "1234567890";

	printf("実行前str1:%s\n", str1);
	printf("実行前str2:%s\n", str2);
	// i = strlcpy(str1, str2, 4);
	i = ft_strlcpy(str1, str2, 4);
	printf("実行後str1:%s len:%d \n",str1, i);

	return (0);
}
*/
