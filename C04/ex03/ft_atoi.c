/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:57:54 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/25 22:27:29 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	isnum(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 0;
	while (*str && *str == ' ')
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			sign += 1;
		str++;
	}
	while (*str && isnum(*str))
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	if (sign % 2)
		result *= -1;
	return (result);
}

#include <stdio.h>
int main()
{
	char *s = " -1325632";
	printf("%d", ft_atoi(s));
}