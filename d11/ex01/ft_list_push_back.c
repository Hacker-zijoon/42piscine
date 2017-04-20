/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 17:14:18 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/19 14:54:40 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new;

	new = *begin_list;
	if (new)
	{
		while (new->next != NULL)
		{
			new = new->next;
		}
		new->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
