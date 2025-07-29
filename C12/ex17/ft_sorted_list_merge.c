/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 12:35:11 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/29 13:13:44 by gcassi-d         ###   ########.fr       */
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

void	ft_sorted_list_merge(t_list **begin_list1,
	t_list *begin_list2, int (*cmp)())
{
	t_list	*aux;

	if (!begin_list1 || !cmp)
	{
		return ;
	}
	if (!(*begin_list1))
	{
		*begin_list1 = begin_list2;
		return ;
	}
	aux = *begin_list1;
	while (aux->next)
		aux = aux->next;
	aux->next = begin_list2;
	ft_list_sort(begin_list1, cmp);
}
