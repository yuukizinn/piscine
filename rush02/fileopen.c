/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileopen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasaki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 22:34:03 by tmasaki           #+#    #+#             */
/*   Updated: 2021/09/19 22:34:05 by tmasaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

char	*fileopen(int argc, char **argv)
{
	int		fd;
	int		byte_num;
	char	*buf;

	fd = 0;
	buf = 0;
	buf = (char *)malloc(sizeof(char) * 10);
	if (buf == NULL)
		return (NULL);
	if (argc == 2)
		fd = open("./numbers.dict", O_RDONLY);
	else
		fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (NULL);
	byte_num = read(fd, &buf[0], 10);
	if (byte_num < 0)
	{
		close(fd);
		return (NULL);
	}
	else
		buf = filesize_check(buf, fd, argc, argv[1]);
	close(fd);
	return (buf);
}

char	*filesize_check(char *buf, int fd, int argc, char *argv)
{
	int	i;
	int	byte_num;

	i = 0;
	byte_num = 1;
	while (byte_num > 0)
	{
		buf = (char *)malloc(sizeof(char) * 10);
		byte_num = read(fd, &buf[0], 10);
		i += 10;
	}
	free(buf);
	buf = (char *)malloc(sizeof(char) * i);
	if (buf == NULL)
		return (buf);
	if (argc == 2)
		fd = open("./numbers.dict", O_RDONLY);
	else if (argc == 3)
		fd = open(argv, O_RDONLY);
	byte_num = read(fd, &buf[0], i);
	close(fd);
	return (buf);
}
