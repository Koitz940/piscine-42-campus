/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 11:25:14 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/26 11:25:14 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	if (!*begin_list)
	{
		*begin_list = ft_create_elem(data);
	}
	else
	{
		while ((*begin_list)->next != NULL)
		{
			*begin_list = (*begin_list)->next;
		}
		(*begin_list)->next = ft_create_elem(data);
	}
}
