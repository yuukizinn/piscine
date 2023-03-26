#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main()
{
	char i;
	char str[20] = "abcdefg";
	i = ft_strlen(str);
	printf("%d", i);
}
*/
