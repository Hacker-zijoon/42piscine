/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_square.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 18:55:44 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/26 18:57:06 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "find_square.h"
#include <unistd.h>
#include <stdlib.h>

#define CHECKPOINT(i) if (i != NULL) break;

char *g_charcheck;
char **g_map;
int g_maxlength;

int			find_maxlen(int length)
{
	if (length > g_maxlength)
		g_maxlength = length;
	return (0);
}

t_point		*find_square_location(int row, int col, int size)
{
	int		i;
	int		j;
	t_point	*point;

	i = 0;
	j = 0;
	point = 0;
	point = malloc(sizeof(t_point));
	while (i < size && g_map[i + row])
	{
		j = 0;
		while (j < size && (g_map[i + row][j + col] != '\0'))
			if (g_map[i + row][(j++) + col] == g_charcheck[1])
				return (NULL);
		i++;
	}
	if ((i == size) && (j == size))
	{
		point->x = row;
		point->y = col;
		point->size = size;
		return (point);
	}
	else
		return (NULL);
}

t_point		*search_square(int size, int max, int min)
{
	t_point	*point;
	int		i;
	int		j;

	if (size == min)
		return (NULL);
	i = 0;
	j = 0;
	point = 0;
	while (g_map[i])
	{
		while (g_map[i][j] != '\0')
		{
			if (g_map[i][j] != g_charcheck[1])
				point = find_square_location(i, j, size);
			CHECKPOINT(point);
			j++;
		}
		CHECKPOINT(point);
		j = 0;
		i++;
	}
	return (compare_square(point, size, max, min));
}

t_point		*compare_square(t_point *point, int size, int max, int min)
{
	t_point *temp;

	temp = NULL;
	if (point)
		temp = search_square((size + max) / 2, max, size);
	else
		temp = search_square((min + size) / 2, size, min);
	if ((temp && !point) || (temp && point))
		return (temp);
	else
		return (point);
}

t_point		*bsq(char **map)
{
	int		i;
	int		j;
	int		length;

	i = 0;
	j = 0;
	length = 0;
	g_maxlength = 0;
	g_map = map;
	while (map[i])
	{
		while (map[i][j] != '\0')
		{
			if (map[i][j++] == g_charcheck[1])
				length = find_maxlen(length);
			else
				length++;
		}
		length = find_maxlen(length);
		j = 0;
		i++;
	}
	return (search_square(g_maxlength / 2, g_maxlength, 0));
}
