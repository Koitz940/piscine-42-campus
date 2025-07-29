/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 22:58:57 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/19 17:05:33 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(long nb)
{
	char	c;
	long	power;
	int		i;

	i = 0;
	power = 1;
	while (i < 9)
	{
		power *= 10;
		i++;
	}
	i = 0;
	while (i < 10)
	{
		c = '0' + (nb / power) % 10;
		write(1, &c, 1);
		power /= 10;
		i++;
	}
}

int	okdiags(int *set)
{
	int	i;
	int	j;

	i = -1;
	while (++i < 10)
	{
		j = i;
		while (++j < 10)
		{
			if (i - j == set[i] - set[j])
				return (0);
			if (j - i == set[i] - set[j])
				return (0);
		}
	}
	return (1);
}

int	isvalid(long display)
{
	int	set[10];
	int	i;
	int	j;

	i = -1;
	while (++i < 10)
	{
		set[i] = display % 10;
		display /= 10;
	}
	i = -1;
	while (++i < 10)
	{
		j = i;
		while (++j < 10)
		{
			if (set[j] == set[i])
				return (0);
		}
	}
	if (okdiags(set))
		return (1);
	return (0);
}

int	ten_queens(long display, long current)
{
	long	j;
	int		result;

	if (current == 10)
	{
		if (isvalid(display))
		{
			ft_putnbr(display);
			write(1, "\n", 1);
			return (1);
		}
		return (0);
	}
	result = 0;
	j = 0;
	while (j < 10)
	{
		result += ten_queens(10 * display + j, current + 1);
		j++;
	}
	return (result);
}

int	ft_ten_queens_puzzle(void)
{
	return (ten_queens(0, 0));
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_ten_queens_puzzle());
}*/