/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 21:52:39 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/18 22:58:15 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
		result *= nb--;
	return (result);
}

/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_iterative_factorial(-2));
	printf("%d", ft_iterative_factorial(0));
	printf("%d", ft_iterative_factorial(1));
	printf("%d", ft_iterative_factorial(5));
}
*/