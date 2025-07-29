/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 12:41:17 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/26 12:41:17 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
	int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*current;
	t_list	*previous;
	t_list	*next;

	current = *begin_list;
	previous = NULL;
	while (current)
	{
		next = current->next;
		if (cmp(current->data, data_ref))
		{
			previous = current;
			current = next;
		}
		else
		{
			free_fct(current->data);
			if (!previous)
				*begin_list = next;
			else
				previous->next = next;
			free(current);
			current = next;
		}
	}
}
