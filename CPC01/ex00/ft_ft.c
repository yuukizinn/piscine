#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main()
{
	int num;
	int *i;

	num = 1;
	i = &num;
	printf("%d\n", *i);
	ft_ft(i);
	printf("%d\n", *i);

	// int	*num;
	// int i;
	// num = &i;
}
