/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 11:34:49 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/26 11:34:49 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*copy;

	copy = begin_list;
	while (begin_list)
	{
		begin_list = begin_list->next;
		free_fct(copy->data);
		free(copy);
		copy = begin_list;
	}
}
