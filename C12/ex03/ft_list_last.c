/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 11:22:50 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/26 11:22:50 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_last(t_list *begin_list)
{
	if (!begin_list)
		return (NULL);
	while (begin_list->next != NULL)
	{
		begin_list = begin_list->next;
	}
	return (begin_list);
}
