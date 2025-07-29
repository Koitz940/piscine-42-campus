/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 22:19:19 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/18 22:50:54 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int nb)
{
	int	n;
	int	sqaure;

	if (nb < 0)
		return (0);
	sqaure = 0;
	n = 0;
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

/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_i_prime(19));
	printf("%d\n", ft_i_prime(21));
	printf("%d\n", ft_i_prime(0));
	printf("%d", ft_i_prime(104));
}
*/