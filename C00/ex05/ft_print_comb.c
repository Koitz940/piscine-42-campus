/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:15:43 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/16 16:12:43 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0' - 1;
	while (++i < '8')
	{
		j = i;
		while (++j < '9')
		{
			k = j;
			while (++k < 1 + '9')
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &k, 1);
				if (!(i == '7' && j == '8' && k == '9'))
				{
					write(1, ", ", 2);
				}
			}
		}
	}
}

int	main(void)
{
	ft_print_comb();
}
