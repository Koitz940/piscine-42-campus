/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 22:51:50 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/28 17:53:02 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	result *= sign;
	return (result);
}

int	ft_find(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_in(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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
