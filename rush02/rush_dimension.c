/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_dimension.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 07:50:37 by jlopes            #+#    #+#             */
/*   Updated: 2017/04/23 23:24:06 by jlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_dimension.h"

int	x_dimension(char *str)
{
	int x;

	x = 0;
	while (*str && *str != '\n')
	{
		x++;
		str++;
	}
	return (x);
}

int	y_dimension(char *str)
{
	int y;

	y = 0;
	while (*str)
	{
		if (*str == '\n')
			y++;
		str++;
	}
	return (y);
}
