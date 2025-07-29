/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 11:18:27 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/26 11:18:27 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
	int	counter;

	if (!begin_list)
		return (NULL);
	while (begin_list->next != NULL)
	{
		counter++;
		begin_list = begin_list->next;
	}
	return (counter);
}
