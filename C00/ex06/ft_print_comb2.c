/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:38:33 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/13 19:12:22 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int x, int n)
{
	int		digits;
	int		m;
	char	d;

	digits = 1;
	m = x;
	while (m > 9)
	{
		m /= 10;
		digits++;
	}
	if (digits == n)
	{
		if (x > 9)
			print(x / 10, n - 1);
		d = '0' + (char)(x % 10);
		write(1, &d, 1);
	}
	else
	{
		write(1, "0", 1);
		print(x, n - 1);
	}
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			print(i, 2);
			write(1, " ", 1);
			print(j, 2);
			if (!(i == 98 && j == 99))
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}

/* int	main(void)
{
	ft_print_comb2();
} */
