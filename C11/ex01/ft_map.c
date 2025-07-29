/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 14:57:28 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/28 18:12:10 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*new_array;

	new_array = malloc(sizeof(int) * length);
	if (!(new_array))
	{
		free(new_array);
		return (NULL);
	}
	i = -1;
	while (++i < length)
	{
		new_array[i] = f(tab[i]);
	}
	return (new_array);
}
