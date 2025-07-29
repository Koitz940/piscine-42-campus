/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 22:26:23 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/18 22:49:50 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int nb)
{
	int	n;
	int	sqaure;

	sqaure = 0;
	n = 0;
	if (nb < 0)
		return (0);
	while (sqaure <= nb)
	{
		if (sqaure == nb)
			return (n);
		sqaure += 2 * n + 1;
		n++;
	}
	return (n);
}

int	ft_is_prime(int nb)
{
	int	sqrt;
	int	i;

	if (nb < 2)
		return (0);
	if (nb < 4)
		return (1);
	sqrt = 1 + max(nb);
	i = 2;
	while (i <= sqrt)
	{
		if (!(nb % i))
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (nb <= 2)
		return (2);
	while (!(ft_is_prime(i)))
		i++;
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
	int n = 3701;
	printf("%d", ft_find_next_prime(n));
}
*/