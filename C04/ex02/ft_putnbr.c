/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:56:41 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/18 12:55:42 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	n;
	char	c;

	n = nb;
	if (nb < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	c = '0' + n % 10;
	write(1, &c, 1);
}

/*
#include <stdio.h>
int main()
{
	int s = -16383;
	printf("%d", ft_putnbr(s));
}*/