/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:28:44 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/16 16:15:57 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	power(int b, int e)
{
	int	result;

	result = 1;
	while (e-- > 0)
	{
		result *= b;
	}
	return (result);
}

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

void	print_all(int x, int n, int layer, int previous_digit)
{
	int	last;
	int	j;
	int	m;

	last = 0;
	m = -1;
	while (m++ < n - 1)
		last = last * 10 + 10 - n + m;
	if (layer < n)
	{
		j = previous_digit + 1;
		while (j < 10 - n + 1 + layer)
		{
			print_all(x + j * power(10, n - layer - 1), n, layer + 1, j);
			j++;
		}
	}
	else
	{
		print(x, n);
		if (!(x == last))
			write(1, ", ", 2);
	}
}

void	ft_print_combn(int n)
{
	if (1 > n | n > 9)
		return ;
	print_all(0, n, 0, -1);
}

/* int	main(void)
{
	ft_print_combn(4);
} */
