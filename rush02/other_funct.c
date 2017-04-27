/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_funct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 07:45:30 by jlopes            #+#    #+#             */
/*   Updated: 2017/04/23 23:32:15 by jlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "other_funct.h"
#include "rush.h"
#include "if_its_rush.h"
#include "str_funct.h"
#include <stdlib.h>

void	init_vector(t_rush **vector)
{
	vector[0] = init_rush_00();
	vector[1] = init_rush_01();
	vector[2] = init_rush_02();
	vector[3] = init_rush_03();
	vector[4] = init_rush_04();
}

void	destroy_vector(t_rush **vector)
{
	free(vector[0]);
	free(vector[1]);
	free(vector[2]);
	free(vector[3]);
	free(vector[4]);
}

void	print_solution(int rush_nb, int x, int y)
{
	ft_putstr("[rush-0");
	ft_putnbr(rush_nb);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}

void	print_the_other_solutions(int *solutions, int i, int x, int y)
{
	while (i < 5)
	{
		if (solutions[i] == 1)
		{
			ft_putstr(" || ");
			print_solution(i, x, y);
		}
		i++;
	}
}

void	check_and_print_first_solution_if_any(t_rush **vector, char *str,
		int x, int y)
{
	int	solutions[5];
	int	i;

	i = 0;
	while (i < 5)
	{
		if (if_its_rush(vector[i], str, x, y))
			solutions[i] = 1;
		else
			solutions[i] = 0;
		i++;
	}
	i = 0;
	while (i < 5 && solutions[i] == 0)
		i++;
	if (i < 5)
		print_solution(i++, x, y);
	else
		i++;
	if (i < 6)
		print_the_other_solutions(solutions, i, x, y);
	else
		ft_putstr("any");
}
