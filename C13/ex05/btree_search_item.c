/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 20:04:35 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/28 20:12:27 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include "stdlib.h"

void	*btree_search_item(t_btree *root,
	void *data_ref, int (*cmpf)(void *, void *))
{
	void	*a;

	if (root->left)
	{
		a = btree_search_item(root->left, data_ref, cmpf);
		if (!cmpf(data_ref, a))
			return (a);
	}
	a = btree_search_item(root->item, data_ref, cmpf);
	if (!cmpf(data_ref, a))
		return (a);
	if (root->right)
	{
		a = btree_search_item(root->right, data_ref, cmpf);
		if (!cmpf(data_ref, a))
			return (a);
	}
	return (NULL);
}
