/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 17:42:04 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/26 19:29:25 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_func.h"
#include "find_square.h"

char *g_charcheck;
char **g_map;

void	ft_print_x(char **map, int row, int col, int size)
{
	int		i;
	int		j;
	int		tmp;

	i = row + size;
	j = col + size;
	tmp = col;
	while (row < i)
	{
		while (col < j)
		{
			if (map[row][col] == g_charcheck[0])
				map[row][col] = g_charcheck[2];
			col++;
		}
		col = tmp;
		row++;
	}
}

void	ft_print_solution(char **g_map)
{
	int		i;

	i = 0;
	while (g_map[i])
	{
		ft_putstr(g_map[i]);
		ft_putchar('\n');
		i++;
	}
}

void	ft_print_bsq(void)
{
	t_point *temp;

	temp = bsq(g_map);
	ft_print_x(g_map, temp->x, temp->y, temp->size);
	ft_print_solution(g_map);
	free(g_map);
}
