#include <stdio.h>

int	ft_any(char **tab, int(*f)(char *))
{
	int	i;
	int	rtn;

	i = 0;
	while (tab[i] != NULL)
	{
		rtn = f(tab[i]);
		if (rtn != 0)
			return (1);
		i++;
	}
	return (0);
}

int check_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i < 3)
		return (0);
	else
		return (1);
}

int	main()
{
	int rtn;
	char *tab[6] = {"aa", "ii", "uuu", "ee", "oo"};
	rtn = ft_any(tab, &check_str);
	printf("%d\n", rtn);

	return 0;
}
