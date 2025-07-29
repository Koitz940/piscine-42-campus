/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 22:04:35 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/18 22:53:30 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_recursive_power(10, 2));
	printf("%d\n", ft_recursive_power(-10, 2));
	printf("%d\n", ft_recursive_power(1, 10000));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(0, 10));
	printf("%d\n", ft_recursive_power(2, 16));
}
*/