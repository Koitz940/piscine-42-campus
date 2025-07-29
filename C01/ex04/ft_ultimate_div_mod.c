/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 19:44:37 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/15 18:01:34 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;

	x = *a / *b;
	*b = *a % *b;
	*a = x;
}

/*int	main(void)
{
	int	x;
	int	y;

	x = 3;
	y = 4;
	ft_div_mod(&y, &x);
	printf("%d %d", y, x);
}*/