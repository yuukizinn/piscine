#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	int	x, y, z;
	x = ft_is_prime(9);
	printf("9 prime = %d\n", x);
	y = ft_is_prime(12);
	printf("12 prime = %d\n", y);
	z = ft_is_prime(23);
	printf("23 prime = %d\n", z);
}
*/
