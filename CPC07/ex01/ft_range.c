#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*heap;

	if (min >= max)
		return (NULL);
	heap = (int *)malloc(sizeof(int) * (max - min));
	if (heap == NULL)
		return (NULL);
	i = 0;
	while (min + i < max)
	{
		heap[i] = min + i;
		i++;
	}
	return (heap);
}
/*
int main()
{
	int *test;

	int min = 5;
	int max = 35;
	printf("min = %d\n", min);
	printf("min = %d\n", max);

	test = ft_range(min, max);
	int i = 0;
	while (test[i] != '\0')
	{
		printf("ft_range = %d\n", test[i]);
		i++;
	}
	return 0;
}
*/
