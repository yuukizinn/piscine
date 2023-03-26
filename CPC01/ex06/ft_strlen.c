#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

int	main()
{
	char n;
	char str[20] = "abcdefg";
	n = ft_strlen(str);
	printf("%d", n);
}
