/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 22:52:23 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/16 23:18:23 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_putint(int c);

void	ft_print_sudoku(int **board);

int		**ft_throw_error(void);

int		**ft_tab_alloc(void);

int		ft_valid_box(int **tab, int current_nb, int row, int col);

int		**ft_put_puzzle(int argc, char **argv, int **board);

int		solve(int **puzzle, int row, int column);

int		solve_rev(int **puzzle, int row, int column);

int		check_input(int argc, char **argv);

int		main(int argc, char **argv);

int		empty(int **puzzle, int row, int column);
#endif
