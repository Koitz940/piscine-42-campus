/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 21:55:59 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/18 22:57:00 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_recursive_factorial(-2));
	printf("%d", ft_recursive_factorial(0));
	printf("%d", ft_recursive_factorial(1));
	printf("%d", ft_recursive_factorial(5));
}
*/