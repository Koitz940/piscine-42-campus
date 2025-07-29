/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 19:43:02 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/28 20:03:11 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
	int (*cmpf)(void *, void *))
{
	t_btree		*current;

	current = *root;
	if (!current)
	{
		*root = btree_create_node(item);
		return ;
	}
	while (current)
	{
		if (cmpf(item, current->item) < 0)
		{
			if (!(current->left))
				current->left = btree_create_node(item);
			current = current->left;
		}
		else
		{
			if (!(current->left))
				current->right = btree_create_node(item);
			current = current->left;
		}
	}
}
