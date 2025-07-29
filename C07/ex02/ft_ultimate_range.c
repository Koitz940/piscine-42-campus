/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 17:53:31 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/23 13:24:54 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*new;
	int	old;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	new = malloc(sizeof(int) * (max - min));
	if (new == NULL)
	{
		*range = NULL;
		return (-1);
	}
	old = min;
	old -= 1;
	i = -1;
	while (++old < max)
		new[++i] = old;
	*range = new;
	return (max - min);
}

/*
#include <stdio.h>
int main(void)
{
	int **range = malloc(sizeof(int *) * 1);
	int i = -1;
	printf("%d\n", ft_ultimate_range(range, 10, 20))
	if (range != NULL)
	{
		while (++i < 10)
			printf("%d ", range[0][i]);
	}
}
*/