/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_its_rush.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 07:40:15 by jlopes            #+#    #+#             */
/*   Updated: 2017/04/23 23:29:15 by jlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include "if_its_rush.h"

int	if_its_rush(t_rush *rush, char *str, int x, int y)
{
	if (x < 1 || y < 1)
		return (1);
	if (check_header(rush, str, x) == 0)
		return (0);
	if (check_content(rush, str, x, y) == 0)
		return (0);
	if (check_footer(rush, str, x, y) == 0)
		return (0);
	return (1);
}

int	check_header(t_rush *rush, char *str, int x)
{
	int	i;

	if (*str++ != rush->header[0])
		return (0);
	i = 2;
	while (i++ < x)
	{
		if (*str++ != rush->header[1])
			return (0);
	}
	if (x != 1)
	{
		if (*str++ != rush->header[2])
			return (0);
	}
	if (*str++ != '\n')
		return (0);
	return (1);
}

int	check_content(t_rush *rush, char *str, int x, int y)
{
	int i;
	int	j;

	str = str + x + 1;
	j = 2;
	while (j++ < y)
	{
		if (*str++ != rush->content[0])
			return (0);
		i = 2;
		while (i++ < x)
		{
			if (*str++ != rush->content[1])
				return (0);
		}
		if (x != 1)
		{
			if (*str++ != rush->content[2])
				return (0);
		}
		if (*str++ != '\n')
			return (0);
	}
	return (1);
}

int	check_footer(t_rush *rush, char *str, int x, int y)
{
	int	i;

	str = str + (x + 1) * (y - 1);
	if (y != 1)
	{
		if (*str++ != rush->footer[0])
			return (0);
		i = 2;
		while (i++ < x)
		{
			if (*str++ != rush->footer[1])
				return (0);
		}
		if (x != 1)
		{
			if (*str++ != rush->footer[2])
				return (0);
		}
		if (*str++ != '\n')
			return (0);
	}
	return (1);
}
