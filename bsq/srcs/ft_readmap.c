/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 15:44:50 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/26 19:02:43 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "readmap.h"
#include "ft_func.h"
#include <stdio.h>

char **g_map;
char *g_charcheck;

void	read_map3(char *buf, int row, int col, int i)
{
	int		j;
	int		k;

	j = 0;
	k = 0;
	g_map = (char**)malloc(sizeof(char*) * (row + 1));
	g_map[row] = NULL;
	g_map[j] = (char*)malloc(sizeof(char) * (col + 1));
	while (buf[i] != '\0')
	{
		if (buf[i] == '\n')
		{
			g_map[j][k] = '\0';
			if (valid_char3(col, k))
			{
				j++;
				if (j < row)
					g_map[j] = (char*)malloc(sizeof(char) * (col + 1));
				k = 0;
			}
		}
		else
			g_map[j][k++] = buf[i];
		i++;
	}
}

int		read_map2(char *buf, int ret)
{
	int		cnt;
	int		i;
	int		j;
	int		row;
	int		col;

	i = 0;
	j = 0;
	cnt = 0;
	row = ft_atoi(buf);
	while (buf[i++] != '\n')
		cnt++;
	if (valid_char(buf, row, i, cnt) && valid_char2(g_charcheck, buf, i))
	{
		col = (ret - cnt - row - 1) / row;
		read_map3(buf, row, col, i);
		return (1);
	}
	else
	{
		ft_putstr("map error\n");
		return (0);
	}
}

int		read_map(int fd)
{
	int		ret;
	char	buf[BUF_SIZE + 1];

	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	return (read_map2(buf, ret));
}
