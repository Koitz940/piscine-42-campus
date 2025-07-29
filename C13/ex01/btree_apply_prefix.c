/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcassi-d <gcassi-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:37:59 by gcassi-d          #+#    #+#             */
/*   Updated: 2025/07/28 19:32:12 by gcassi-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	applyf(root->item);
	if (root->left)
		btree_apply_prefix(root->left, applyf);
	if (root->right)
		btree_apply_prefix(root->right, applyf);
}
