// #include "ft_abs.h"
#include <stdio.h>

# define ABS(Value) (Value > 0 ? Value : Value * - 1)

int	main()
{
	printf("%d\n", ABS(-1));
	printf("%d\n", ABS(0));
	printf("%d\n", ABS(-1233));
	printf("%d\n", ABS(23));
	return (0);
}
