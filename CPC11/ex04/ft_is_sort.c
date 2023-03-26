#include <stdio.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	rtn;

	i = 0;
	rtn = f(tab[i], tab[i + 1]);
	while (i < length - 1)
	{
		if (rtn == -1)
		{
			if (f(tab[i], tab[i + 1]) > 0)
				return (0);
		}
		else if (rtn == 1)
		{
			if (f(tab[i], tab[i + 1]) < 0)
				return (0);
		}
		rtn = f(tab[i], tab[i + 1]);
		i++;
	}
	return (1);
}

int	sort_check(int x, int y)
{
	if (x < y)
		return (-1);
	else if (x == y)
		return (0);
	else
		return (1);
}

int	main()
{
	int rtn;
	int tab[100] = {5, 4, 3, 2, 3};
	rtn = ft_is_sort(tab, 5, &sort_check);
	printf("%d\n", rtn);

	return 0;
}
