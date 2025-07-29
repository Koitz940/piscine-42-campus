/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:33:42 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/22 16:58:34 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_ascii_greater(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2 > 0);
}

void	ft_sort_int_tab(char **tab, int size)
{
	int		i;
	int		j;
	char	*aux;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (ft_ascii_greater(tab[j], tab[j + 1]))
			{
				aux = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = aux;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 1)
	{
		argv++;
		ft_sort_int_tab(argv, argc - 1);
		argv--;
		while (++i < argc)
		{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
		}
	}
}
