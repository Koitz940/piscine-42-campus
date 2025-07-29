/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 11:50:54 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/26 11:50:54 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*next;
	t_list	*current;
	t_list	*previous;

	current = (*begin_list);
	previous = NULL;
	next = NULL;
	(*begin_list)->next = NULL;
	while (current)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	*begin_list = previous;
}
