/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 11:40:44 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/26 11:40:44 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	while (begin_list)
	{
		if (nbr == 0)
			return (begin_list);
		nbr--;
		begin_list = begin_list->next;
	}
	return (NULL);
}
