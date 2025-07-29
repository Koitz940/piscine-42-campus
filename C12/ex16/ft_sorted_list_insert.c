/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 12:24:34 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/29 12:34:30 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*aux;
	t_list	*current;
	void	*temp;

	if (!begin_list || !cmp)
		return ;
	if (!(*begin_list))
		return ;
	aux = *begin_list;
	while (aux->next)
	{
		current = aux;
		while (current->next)
		{
			if (cmp(current->data, current->next->data))
			{
				temp = current->data;
				current->data = current->next->data;
				current->next->data = temp;
			}
			current = current->next;
		}
		aux = aux->next;
	}
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*new;
	t_list	*aux;

	new = ft_create_elem(data);
	if (!begin_list || !cmp)
	{
		return ;
	}
	if (!(*begin_list))
	{
		*begin_list = new;
		return ;
	}
	aux = *begin_list;
	while (aux->next)
		aux = aux->next;
	aux->next = new;
	ft_list_sort(begin_list, cmp);
}
