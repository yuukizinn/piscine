#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main()
{
	int a, b, *div, *mod;
	int s_div, s_mod;

	a = 120;
	b = 45;
	// div = &s_div;
	// mod = &s_mod;

	ft_div_mod(a, b, div, mod);
	printf("%d\n", *div);
	printf("%d\n", *mod);

}
