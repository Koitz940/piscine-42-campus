/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 21:40:52 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/17 21:36:38 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long long	power(b, e)
{
	long long	result;

	result = 1;
	while (e-- > 0)
		result *= b;
	return (result);
}

void	print(long long a, int max)
{
	char		c;
	char		*base;
	long long	digit;

	digit = power(16, max - 1);
	base = "0123456789abcdef";
	while (--max >= 0)
	{
		c = (a / digit) % 16;
		c = base[(unsigned char)c];
		write(1, &c, 1);
		digit /= 16;
	}
}

void	write16(char *p)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (p[i] < 32 | p[i] == 127)
			write(1, ".", 1);
		else
			write(1, p + i, 1);
		i++;
	}
	write(1, "\n", 1);
}

void	write_last(char *p, int amount)
{
	int	i;

	i = -1;
	print((long long)p, 16);
	write(1, ": ", 2);
	while (++i < amount)
	{
		print(p[i], 2);
		if (i % 2)
			write(1, " ", 1);
	}
	i = -1;
	while (++i < 40 - 2 * amount - (amount) / 2)
		write(1, " ", 1);
	i = -1;
	while (++i < amount)
	{
		write(1, p + i, 1);
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*p;
	int		fulls;
	int		i;

	p = (char *)addr;
	fulls = size / 16 + 1;
	while (--fulls > 0)
	{
		i = -1;
		print((long long)p, 16);
		write(1, ": ", 2);
		while (++i < 16)
		{
			print(p[i], 2);
			if (i % 2)
				write(1, " ", 1);
		}
		write16(p);
		p += 16;
	}
	if (size % 16)
		write_last(p, size % 16);
	return (addr);
}

/*
int main(void)
{
	char* p = "some money, I like a lot psipipipipipipi";
	ft_print_memory(p, 41);
}*/