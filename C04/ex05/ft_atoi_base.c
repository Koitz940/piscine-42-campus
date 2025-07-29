/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:53:15 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/19 12:53:35 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (str[i] == '+' || str[i] == '-' || str[i] == ' ')
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

int	ft_find(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	sign;

	result = 0;
	sign = 0;
	if (!isdistict(base))
		return (0);
	while (*str && *str == ' ')
		str++;
	while (*str && (*str == '+' | *str == '-'))
	{
		if (*str == '-')
			sign += 1;
		str++;
	}
	while (*str && ft_find(*str, base) != -1)
	{
		result *= ft_strlen(base);
		result += ft_find(*str, base);
		str++;
	}
	if (sign % 2)
		result *= -1;
	return (result);
}

/*
#include <stdio.h>
int main()
{
	char *s = "  -1234r";
	char *base = "0123456789";
	printf("%d", ft_atoi_base(s, base));
}*/