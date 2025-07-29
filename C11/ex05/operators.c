/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 22:56:42 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/28 17:53:38 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"
#include "operators.h"
#include <unistd.h>

void	minus(int a, int b)
{
	ft_putnbr(a - b);
}

void	plus(int a, int b)
{
	ft_putnbr(a + b);
}

void	times(int a, int b)
{
	ft_putnbr(a * b);
}

void	divide(int a, int b)
{
	if (b == 0)
	{
		write(1, "Stop : division by zero", 23);
		return ;
	}
	ft_putnbr(a / b);
}

void	mod(int a, int b)
{
	if (b == 0)
	{
		write(1, "Stop : modulo by zero", 21);
		return ;
	}
	ft_putnbr(a % b);
}
