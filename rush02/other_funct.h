/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_funct.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 07:47:53 by jlopes            #+#    #+#             */
/*   Updated: 2017/04/23 23:31:00 by jlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OTHER_FUNCT_H
# define OTHER_FUNCT_H
# include "rush.h"

void	init_vector(t_rush **vector);
void	destroy_vector(t_rush **vector);
void	print_solution(int rush_nb, int x, int y);
void	print_other_solutions(int *solutions, int i, int x, int y);
void	check_and_print_first_solution_if_any(t_rush **vector, char *str,
		int x, int y);
#endif
