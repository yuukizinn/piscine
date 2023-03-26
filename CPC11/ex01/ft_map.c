#include <stdio.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*rtn;

	rtn = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		rtn[i] = f(tab[i]);
		i++;
	}
	return (rtn);
}

int print_num(int nb)
{
	if (nb > 0)
		return (0);
	else
		return (1);
}

int	main()
{
	int *rtn;
	int tab[] = {-50, 34, -13, 54, -66, 44};
	rtn = ft_map(tab, 6, &print_num);

	int i = 0;
	while (i < 6)
	{
		printf("%d\n", rtn[i]);
		i++;
	}
	return 0;
}

