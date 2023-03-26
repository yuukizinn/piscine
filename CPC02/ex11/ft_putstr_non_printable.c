#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	convert_hexa_decimal(char str)
{
	char *hexa_decimal;

	hexa_decimal = "0123456789abcdef";
	ft_putchar(hexa_decimal[str / 16]);
	ft_putchar(hexa_decimal[str % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || 126 < str[i])
		{
			ft_putchar(92);
			convert_hexa_decimal(str[i]);
			i++;
		}
		ft_putchar(str[i]);
		i++;
	}
}
/*
int main()
{
	char str1[30] = "Coucou\ntu vas	 bien ?";
	ft_putstr_non_printable(str1);
	return (0);
}
*/
