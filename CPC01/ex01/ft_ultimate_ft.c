#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main()
{
	int	*********a;
	int	********b;
	int	*******c;
	int	******d;
	int	*****e;
	int	****f;
	int	***g;
	int	**h;
	int	*i;
	int num;

	i = &num;
	h = &i;
	g = &h;
	f = &g;
	e = &f;
	d = &e;
	c = &d;
	b = &c;
	a = &b;

	ft_ultimate_ft(a);
	printf("%d", *********a);
	// printf("%d", num);
}
