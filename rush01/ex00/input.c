/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 22:52:06 by jhu               #+#    #+#             */
/*   Updated: 2017/04/16 22:52:07 by jhu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_valid_box(int **tab, int current_nb, int row, int col)
{
	int i;
	int row_str;
	int col_str;

	i = 0;
	row_str = (row / 3) * 3;
	col_str = (col / 3) * 3;
	while (i < 9)
	{
		if (tab[row][i] == current_nb)
			return (0);
		if (tab[i][col] == current_nb)
			return (0);
		if (tab[row_str + (i % 3)][col_str + (i / 3)] == current_nb)
			return (0);
		i++;
	}
	return (1);
}

int		**ft_tab_alloc(void)
{
	int i;
	int j;
	int **tab;

	i = 0;
	tab = (int **)malloc(sizeof(int *) * 9);
	while (i < 9)
	{
		tab[i] = (int *)malloc(sizeof(int) * 9);
		j = 0;
		while (j < 9)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	return (tab);
}

int		**ft_put_puzzle(int argc, char **argv, int **board)
{
	int x;
	int y;

	y = 0;
	while (y < argc - 1)
	{
		x = 0;
		while (x < argc - 1)
		{
			if (argv[y + 1][x] == '.')
				board[y][x] = 0;
			else if (argv[y + 1][x] <= '9' && argv[y + 1][x] >= '1')
				if (ft_valid_box(board, argv[y + 1][x] - '0', y, x))
					board[y][x] = argv[y + 1][x] - '0';
				else
					return (0);
			else
				return (0);
			x++;
		}
		y++;
	}
	return (board);
}
