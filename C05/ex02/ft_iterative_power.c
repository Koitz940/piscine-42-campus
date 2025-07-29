/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 21:58:17 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/18 23:21:05 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	while (power)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_iterative_power(10, 2));
	printf("%d\n", ft_iterative_power(-10, 2));
	printf("%d\n", ft_iterative_power(1, 10000));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(0, 10));
	printf("%d\n", ft_iterative_power(2, 16));
}
*/