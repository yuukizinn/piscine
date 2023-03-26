#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main()
{
	int *a, x;
	int *b, y;
	x = 10;
	y = 55;
	a = &x;
	b = &y;

	ft_swap(a, b);
	printf("%d\n", *a);
	printf("%d\n", *b);
}
