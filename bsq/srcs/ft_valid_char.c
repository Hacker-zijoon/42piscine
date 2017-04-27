/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 11:00:56 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/26 18:54:57 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_func.h"
#include <stdio.h>

char *g_charcheck;

int		numlength(int num)
{
	int		cnt;

	cnt = 0;
	while (num != 0)
	{
		num = num / 10;
		cnt++;
	}
	return (cnt);
}

int		valid_char3(int col, int k)
{
	int		linecheck;

	linecheck = col;
	if (linecheck != k)
	{
		ft_putstr("map error\n");
		exit(0);
	}
	return (1);
}

int		valid_char2(char *g_charcheck, char *buf, int i)
{
	int		j;
	int		cnt;

	j = 0;
	cnt = 0;
	while (buf[i] != '\0')
	{
		if (g_charcheck[j] != buf[i] && g_charcheck[j + 1] != buf[i] && \
			'\n' != buf[i])
			return (0);
		if (g_charcheck[j + 1] == buf[i])
			cnt++;
		i++;
	}
	if (cnt == 0)
		return (0);
	return (1);
}

int		valid_char(char *buf, int row, int i, int cnt)
{
	int		j;

	j = 0;
	if (row == 0)
		return (0);
	cnt = cnt - numlength(row);
	if (cnt != 3)
		return (0);
	g_charcheck = (char*)malloc(sizeof(char) * (cnt + 1));
	i = numlength(row);
	while (j < cnt)
	{
		g_charcheck[j] = buf[i];
		j++;
		i++;
	}
	g_charcheck[j++] = '\0';
	return (1);
}
