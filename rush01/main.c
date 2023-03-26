/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosawa <yosawa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 16:14:49 by yosawa            #+#    #+#             */
/*   Updated: 2021/09/12 16:14:53 by yosawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	start(int input[]);
void	output_error(void);
void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	i;
	int	input[16];

	if (argc != 2)
	{
		output_error();
		return (0);
	}
	i = 0;
	while (argv[1][i] != '\0')
		i++;
	if (i != 31)
	{
		output_error();
		return (0);
	}
	i = 0;
	while (i < 16)
	{
		input[i] = (int)argv[1][2 * i] - '0';
		i++;
	}
	start(input);
	return (0);
}

void	output_error(void)
{
	char	*c;
	int		index;

	c = "Error\n";
	index = 0;
	while (c[index] != '\0')
	{
		ft_putchar(c[index]);
		index++;
	}
}
