#include <stdlib.h>
#include <stdio.h>

char	*make_array(char *addr_str, int size)
{
	char	*heap;
	int		i;

	heap = (char *)malloc(sizeof(char) * size + 1);
	i = 0;
	while (i < size)
	{
		heap[i] = addr_str[i];
		i++;
	}
	heap[i] = '\0';
	return (heap);
}

int	sep_check(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	req_size(char *str, char *charset)
{
	int	i;
	int	size;

	i = 0;
	size = 1;
	while (str[i] != '\0')
	{
		if (sep_check(str[i], charset) == 1)
		{
			while (sep_check(str[i], charset) == 1)
				i++;
			size++;
		}
		else
			i++;
	}
	return (size);
}

char	**ft_split(char *str, char *charset)
{
	char	**two_d_array;
	int		i;
	int		j;
	int		size;

	i = 0;
	j = 0;
	size = 0;
	two_d_array = (char **)malloc(sizeof(char *) * req_size(str, charset) + 1);
	while (str[i] != '\0')
	{
		if (sep_check(str[i], charset) == 0)
			size++;
		if (sep_check(str[i], charset) == 1 && size > 0)
		{
			two_d_array[j++] = make_array(&str[i - size], size);
			size = 0;
		}
		i++;
	}
	if (size > 0)
		two_d_array[j++] = make_array(&str[i - size], size);
	two_d_array[j] = 0;
	return (two_d_array);
}
/*
int main()
{
	char	str[] = "!!apple!!!orange&banana/grape!peach!$";
	char	charset[] = "/$&!";
	char	**pp;
	char	*p;
	int		i;

	p = 0;
	pp = 0;
	pp = ft_split(str, charset);
	i = 0;
	printf("str     = %s\n", str);
	printf("charset = %s\n", charset);
	while (pp[i] != NULL)
	{
		p = pp[i];
		printf("i=%i:%s\n",i, p);
		i++;
	}
	return 0;
}
*/
