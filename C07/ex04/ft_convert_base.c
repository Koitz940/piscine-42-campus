/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:13:23 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/23 12:16:19 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

int	ft_find(char a, char *str);

int	isdistict(char *str);

char	*ft_zero(char *base)
{
	char	*result;

	result = malloc(2 * sizeof(char));
	result[0] = base[0];
	result[1] = '\0';
	return (result);
}

char	*ft_transform(int number, int sign, char *digits, int base)
{
	size_t	counter;
	int		copy;
	char	*result;

	counter = 1;
	if (sign % 2)
		counter++;
	copy = number;
	while (copy)
	{
		counter++;
		copy /= base;
	}
	result = malloc(sizeof(char) * counter);
	if (result == NULL)
		return (NULL);
	if (sign)
		result[0] = '-';
	while (number)
	{
		result[counter - copy++ - 2] = digits[number % base];
		number /= base;
	}
	result[counter - 1] = '\0';
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		sign;
	int		number;

	sign = 0;
	number = 0;
	if (!(isdistict(base_from)) || !(isdistict(base_to)))
		return (NULL);
	if ((ft_strlen(base_from) < 2) || (ft_strlen(base_to) < 2))
		return (NULL);
	while (*nbr == ' ')
		nbr++;
	while (*nbr && (*nbr == '+' || *nbr == '-'))
	{
		sign += 1;
		nbr++;
	}
	while (*nbr && ft_find(*nbr, base_from) != -1)
	{
		number *= ft_strlen(base_from);
		number += ft_find(*nbr, base_from);
		nbr++;
	}
	if (number == 0)
		return (ft_zero(base_to));
	return (ft_transform(number, sign, base_to, ft_strlen(base_to)));
}
