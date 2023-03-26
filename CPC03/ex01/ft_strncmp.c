
#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return 0;
	}
	while (i + 1 < n && s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main()
{
	int i, j;
	char str1[] = "ABCDEFF";
	char str2[] = "BBCDEFG";

	printf("str1:%s\n", str1);
	printf("str2:%s\n", str2);

	i = strncmp(str1, str2, 0);
	j = ft_strncmp(str1, str2, 0);

	printf("strcmp   :%d\n", i);
	printf("ft_strcmp:%d\n", j);

	return (0);
}
*/
