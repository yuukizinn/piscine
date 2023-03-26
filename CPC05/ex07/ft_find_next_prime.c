#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb && i <= 46340)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	unsigned int	i;

	i = nb;
	while (ft_is_prime(i) == 0)
		i++;
	return (i);
}

int main()
{
	int	x, y, z;
	x = ft_find_next_prime(0);
	printf("9 next prime = %d\n", x);
	y = ft_find_next_prime(1);
	printf("12 next prime = %d\n", y);
	z = ft_find_next_prime(2);
	printf("23 next prime = %d\n", z);
}

