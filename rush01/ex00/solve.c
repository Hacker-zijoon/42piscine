/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 22:49:43 by jhu               #+#    #+#             */
/*   Updated: 2017/04/16 22:51:23 by jhu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		solve(int **puzzle, int row, int column)
{
	int num;

	num = 1;
	if (row == 9)
		return (1);
	if (puzzle[row][column] != 0)
		return (empty(puzzle, row, column));
	while (num <= 9)
	{
		if (ft_valid_box(puzzle, num, row, column))
		{
			puzzle[row][column] = num;
			if (solve(puzzle,
					column == 8 ? row + 1 : row,
					column == 8 ? 0 : column + 1))
				return (1);
			puzzle[row][column] = 0;
		}
		num++;
	}
	return (0);
}

int		solve_rev(int **puzzle, int row, int column)
{
	int num;

	num = 9;
	if (row == 9)
		return (1);
	if (puzzle[row][column] != 0)
		return (empty2(puzzle, row, column));
	while (num >= 1)
	{
		if (ft_valid_box(puzzle, num, row, column))
		{
			puzzle[row][column] = num;
			if (solve_rev(puzzle,
					column == 8 ? row + 1 : row,
					column == 8 ? 0 : column + 1))
				return (1);
			puzzle[row][column] = 0;
		}
		num--;
	}
	return (0);
}

int		empty(int **puzzle, int row, int column)
{
	if (solve(puzzle,
			column == 8 ? row + 1 : row,
			column == 8 ? 0 : column + 1))
		return (1);
	return (0);
}

int		empty2(int **puzzle, int row, int column)
{
	if (solve_rev(puzzle,
			column == 8 ? row + 1 : row,
			column == 8 ? 0 : column + 1))
		return (1);
	return (0);
}
