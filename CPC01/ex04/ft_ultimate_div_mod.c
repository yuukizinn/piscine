#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int x, y;
	x = *a;
	y = *b;
	*a = x / y;
	*b = x % y;
}

int	main()
{
	int x, y, *a, *b;
	x = 40;
	y = 15;
	a = &x;
	b = &y;

	ft_ultimate_div_mod(a, b);
	printf("%d\n", *a);
	printf("%d\n", *b);


}
