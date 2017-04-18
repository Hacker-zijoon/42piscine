/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sudoku.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 22:53:57 by jhu               #+#    #+#             */
/*   Updated: 2017/04/16 22:53:58 by jhu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putint(int c)
{
	write(1, &c, 1);
}

void	ft_print_sudoku(int **board)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 8)
		{
			ft_putint(board[i][j] + '0');
			ft_putchar(' ');
			j++;
		}
		ft_putint(board[i][j] + '0');
		ft_putchar('\n');
		i++;
	}
}
