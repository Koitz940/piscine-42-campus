/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 13:11:51 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/26 13:11:51 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	if (!*begin_list1)
		*begin_list1 = begin_list2;
	else
	{
		while ((*begin_list1)->next)
		{
			(*begin_list1) = (*begin_list1)->next;
		}
		(*begin_list1)->next = begin_list2;
	}
}
