/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 22:22:14 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/29 21:46:02 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_read_file(char *filename)
{
	int		buffer;
	int		bytes;
	char	buf[1];

	buffer = open(filename, O_RDONLY);
	if (buffer < 0)
	{
		write(2, "Cannot read file.\n", 18);
		return ;
	}
	bytes = read(buffer, buf, 1);
	while (bytes)
	{
		write(1, buf, 1);
		bytes = read(buffer, buf, 1);
	}
	close(buffer);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	ft_read_file(argv[1]);
}
