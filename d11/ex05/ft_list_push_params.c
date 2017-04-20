/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 16:21:22 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/19 20:01:40 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new;

	if (*begin_list)
	{
		new = ft_create_elem(data);
		new->next = *begin_list;
		*begin_list = new;
	}
	else
		*begin_list = ft_create_elem(data);
}

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*tmp;
	t_list	*new_list;
	int		i;

	i = 1;
	new_list = ft_create_elem(av[1]);
	while (++i < ac)
	{
		ft_list_push_front(&new_list, av[i]);
	}
	tmp = new_list;
	return (tmp);
}
