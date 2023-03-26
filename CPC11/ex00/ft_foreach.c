#include <stdio.h>
#include <unistd.h>

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

void	print_num(int nb)
{
	printf("%d\n", nb);
}

int	main()
{
	int tab[] = {50, 34, 13, 54, 66, 44};
	ft_foreach(tab, 6, &print_num);

	return 0;
}

