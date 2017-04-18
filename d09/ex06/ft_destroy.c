/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 16:53:38 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/14 17:04:31 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void		ft_destroy(char ***factory)
{
	int		a;
	int		b;

	while (factory[a])
	{
		while (factory[a][b])
		{
			free(factory[a][b]);
			b++;
		}
		free(factory[a]);
		a++;
	}
	free(factory);
}
