#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int tmp;
	int i;
	int j;

	i = 0;
	while (i < size - 1)
	{
		j = size - 1;
		while (j != 0)
		{
			if (tab[j - 1] > tab[j])
			{
				tmp = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = tmp;
			}
			j--;
		}
		i++;
	}
}

int	main()
{
	int hairetu[6] = {10, 9, 8, -7, 6, -5};
	int *tab;
	int size;

	tab = hairetu;
	size = 6;

	ft_sort_int_tab(tab, size);
	printf("%d, ", hairetu[0]);
	printf("%d, ", hairetu[1]);
	printf("%d, ", hairetu[2]);
	printf("%d, ", hairetu[3]);
	printf("%d, ", hairetu[4]);
	printf("%d, ", hairetu[5]);
}
