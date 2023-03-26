#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int tmp;
	int roop;
	int i;
	int j;

	i = 0;
	j = size - 1;
	roop = size / 2;
	while (roop > 0)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;
		roop--;
	}
}

int	main()
{
	int hairetu[6] = {3, 6, 23, 67, 22, 5};
	int *tab;
	int size;

	tab = hairetu;
	size = 6;

	ft_rev_int_tab(tab, size);
	printf("%d, ", hairetu[0]);
	printf("%d, ", hairetu[1]);
	printf("%d, ", hairetu[2]);
	printf("%d, ", hairetu[3]);
	printf("%d, ", hairetu[4]);
	printf("%d, ", hairetu[5]);
}
