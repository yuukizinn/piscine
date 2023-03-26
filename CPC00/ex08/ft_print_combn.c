#include <unistd.h>

void	init_combn(char str[], int n)
{
	char moji;
	int soeji;

	moji = n - 1 + '0';
	soeji = n - 1;
	while (n > 0)
	{
		str[soeji] = moji;
		soeji--;
		moji--;
		n--;
	}
}

void	print_num(char str[], int n)
{
	write(1, str, n);
	write(1, ",", 1);
	write(1, " ", 1);
}

void	count_up_check(char str[], int soeji)
{
	char max;
	int digit_up_count;

	max = '9';
	digit_up_count = 0;
	while (str[soeji] >= max)
	{
		soeji--;
		max--;
		digit_up_count++;
	}
	str[soeji]++;
	while(0 < digit_up_count)
	{
		str[soeji + 1] = str[soeji] + 1;
		soeji++;
		digit_up_count--;
	}

}

void	count_up(char str[], int n)
{
	int soeji;

	soeji = n - 1;
	str[soeji]++;
	if (str[soeji] > '9')
	{
		count_up_check(str, soeji);
	}
}

void ft_print_combn(int n)
{
	char	str[9];
	char	breakpoint;

	init_combn(str, n);
	breakpoint = '9' - n;
	while (1)
	{
		print_num(str, n);
		count_up(str, n);
		if (str[0] > breakpoint)
		{
			write(1, str, n);
			break;
		}
	}
}

/*
int main()
{
	ft_print_combn(9);
}
*/
