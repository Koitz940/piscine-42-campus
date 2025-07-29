/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 12:38:11 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/29 12:58:14 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*aux;
	t_list	*current;
	void	*temp;

	if (!(begin_list))
		return ;
	aux = begin_list;
	while (aux->next)
	{
		current = aux;
		while (current->next)
		{
			temp = current->data;
			current->data = current->next->data;
			current->next->data = temp;
			current = current->next;
		}
		aux = aux->next;
	}
}
