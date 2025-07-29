/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 17:44:19 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/22 17:50:51 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	range = malloc(sizeof(int) * (max - min));
	min -= 1;
	i = -1;
	while (++min < max)
		range[++i] = min;
	return (range);
}

/*
#include <stdio.h>
int main(void)
{
	int *range = ft_range(10, 10);
	int i = -1;
	if (range != NULL)
	{
		while (++i < 10)
			printf("%d ", range[i]);
	}
}
*/