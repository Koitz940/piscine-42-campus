/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 14:48:18 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/28 18:11:41 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = -1;
	while (++i < length)
		f(tab[i]);
}

/*
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

int main(void)
{
	int tab[] = {1, 2, 3, 4, -1};
	ft_foreach(tab, 5, &ft_putnbr);
}
*/