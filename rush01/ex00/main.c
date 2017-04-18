/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 22:44:18 by jhu               #+#    #+#             */
/*   Updated: 2017/04/16 23:17:49 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		is_unique(int **board, int **board_rev)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (board[i][j] != board_rev[i][j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int **board;
	int **board_rev;

	if (check_input(argc, argv) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	board = ft_put_puzzle(argc, argv, ft_tab_alloc());
	board_rev = ft_put_puzzle(argc, argv, ft_tab_alloc());
	solve(board, 0, 0);
	solve_rev(board_rev, 0, 0);
	if (is_unique(board, board_rev) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	ft_print_sudoku(board);
	return (0);
}
