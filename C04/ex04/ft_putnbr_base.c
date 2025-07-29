/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:35:28 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/19 12:53:38 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++ != '\0')
	{
		i++;
	}
	return (i);
}

int	isdistict(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[j] == str[i])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	print(long n, char *base, long b)
{
	char	c;

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= b)
		print(n / b, base, b);
	c = base[n % b];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if ((ft_strlen(base) <= 1) | !(isdistict(base)))
		return ;
	print((long)nbr, base, (long)ft_strlen(base));
}

/*
#include <stdio.h>
int main()
{
	int s = 16383;
	char *base = "01";
	printf("%d", ft_putnbr_base(s, base));
}*/