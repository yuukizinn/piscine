#include <stdio.h>

int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb > 0)
	{
		while (i < nb / i)
			i++;
		if (i * i == nb)
			return (i);
	}
	return (0);
}

int main()
{
	int	x, y, z;
	x = ft_sqrt(1);
	printf("1 sqrt = %d\n", x);
	y = ft_sqrt(7);
	printf("-1 sqrt = %d\n", y);
	z = ft_sqrt(25);
	printf("25 sqrt = %d\n", z);
}
