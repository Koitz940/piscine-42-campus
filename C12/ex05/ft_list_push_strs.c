/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 11:29:45 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/26 11:29:45 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*list;
	t_list	*copy;
	int		i;

	if (size == 0)
		return (NULL);
	list = ft_create_elem((void *)strs[0]);
	copy = list;
	i = 1;
	while (i < size)
	{
		list->next = ft_create_elem(strs[i]);
		list = list->next;
	}
	return (copy);
}
