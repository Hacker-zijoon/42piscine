/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 22:39:35 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/21 15:01:42 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, \
	int (*cmpf)(void *, void*))
{
	t_btree *tmp;

	tmp = *root;
	if (tmp == 0)
	{
		tmp = btree_create_node(item);
	}
	else if (cmpf(item, &tmp->item) < 0)
	{
		btree_insert_data(&tmp->left, item, cmpf);
	}
	else
	{
		btree_insert_data(&tmp->right, item, cmpf);
	}
}
