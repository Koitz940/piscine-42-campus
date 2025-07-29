/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:53:27 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/29 22:07:17 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_atoi(char *str)
{
	int	result;

	result = 0;
	while (*str && *str == ' ')
		str++;
	while (*str && (*str == '+' || *str == '-'))
		str++;
	while (*str && '0' <= *str && '9' >= *str)
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result);
}

void	ft_print_header(int i, char *file_name)
{
	if (i == 3)
		write(1, "==> ", 4);
	else
		write(1, "\n==> ", 5);
	while (*file_name)
		write(1, file_name++, 1);
	write(1, " <==\n", 5);
}

int	ft_file_size(char *filename)
{
	int	fd_cpy;
	int	buffer[1];
	int	size;

	fd_cpy = open(filename, O_RDONLY);
	if (fd_cpy < 0)
	{
		write(2, "ft_tail: ", 9);
		while (*filename)
			write(2, filename++, 1);
		write(2, ": No such file or directory\n", 28);
		return (-1);
	}
	size = 0;
	while (read(fd_cpy, buffer, 1))
		size++;
	return (size);
}

void	ft_show_file(int bytes, char *filename)
{
	int		fd;
	int		n;
	int		size;
	char	buf[1];

	size = ft_file_size(filename);
	if (size == -1)
		return ;
	fd = open(filename, O_RDONLY);
	n = 0;
	while (read(fd, buf, 1))
	{
		if (++n >= size - bytes + 1)
			write(1, buf, 1);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	int	i;
	int	bytes;

	i = 3;
	if (argv[1][0] == '-' && argv[1][1] == 'c' && argc >= 4)
	{
		bytes = ft_atoi(argv[2]);
		while (i < argc)
		{
			if (argc > 4)
				ft_print_header(i, argv[i]);
			ft_show_file(bytes, argv[i]);
			i++;
		}
	}
	else
		write(1, "Use: ./ft_tail -c N file1 file2 ...\n", 37);
}
