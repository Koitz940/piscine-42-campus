/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 13:18:47 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/26 13:18:47 by gcassi-d         ###   ########.fr       */
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
