/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:17:42 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/29 21:57:00 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_read_file(int file)
{
	char	buffer[1];

	while (read(file, buffer, 1))
	{
		write(1, buffer, 1);
	}
	close(file);
}

void	ft_cat(int argc, char **argv)
{
	int	file;
	int	i;

	if (argc < 2)
	{
		ft_read_file(0);
		return ;
	}
	i = 0;
	while (++i < argc)
	{
		file = open(argv[i], O_RDONLY);
		if (file < 0)
		{
			write(2, "ft_cat: ", 8);
			while (*argv[i])
			{
				write(2, argv[i], 1);
				argv[i]++;
			}
			write(2, ": No such file or directory\n", 28);
		}
		else
			ft_read_file(file);
	}
}

int	main(int argc, char **argv)
{
	ft_cat(argc, argv);
}
