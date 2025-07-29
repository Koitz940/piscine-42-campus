/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 22:13:09 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/18 22:52:04 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
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
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_sqrt(64));
	printf("%d\n", ft_sqrt(10));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
}
*/