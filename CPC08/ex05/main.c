#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

void ft_putnbr(int nb)
{
	char c;
	long num;

	num = (long)nb;
	if (num < 0)
	{
		num *= -1;
		write(1, "-", 1);
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		num = num % 10;
	}
	if (num < 10)
	{
		c = '0' + num;
		write(1, &c, 1);
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			str_size;
	t_stock_str	*heap;

	heap = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (heap == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		heap[i].size = ft_strlen(av[i]);
		heap[i].str = av[i];
		str_size = ft_strlen(heap[i].str) + 1;
		heap[i].copy = (char *)malloc(sizeof(char) * str_size);
		if (heap[i].copy == NULL)
			return (NULL);
		ft_strcpy(heap[i].copy, heap[i].str);
		i++;
	}
	heap[i].size = 0;
	heap[i].str = 0;
	heap[i].copy = 0;
	return (heap);
}

void	ft_show_tab(struct s_stock_str *par)
{
	unsigned long	i;
	char			size;
	int				s_size;
	int				c_size;

	i = 0;
	while (par[i].str != NULL)
	{
		size = (char)par[i].size;
		s_size = ft_strlen(par[i].str);
		c_size = ft_strlen(par[i].copy);
		write(1, par[i].str, s_size);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		write(1, par[i].copy, c_size);
		write(1, "\n", 1);
		i++;
	}
}

int main()
{
	int ac;

	ac = 3;
	char *av[5] = {"123456789", "abcdefg", "VWXYZ"};
	struct s_stock_str *test;

	test = ft_strs_to_tab(3, av);
	ft_show_tab(test);
}
