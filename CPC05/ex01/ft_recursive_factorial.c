#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
int main()
{
	int x ,y, z;
	x = ft_recursive_factorial(5);
	printf("x=%d\n", x);
	y = ft_recursive_factorial(3);
	printf("y=%d\n", y);
	z = ft_recursive_factorial(6);
	printf("z=%d\n", z);
}
*/
