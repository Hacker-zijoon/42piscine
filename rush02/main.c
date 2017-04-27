/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 07:44:28 by jlopes            #+#    #+#             */
/*   Updated: 2017/04/23 23:28:17 by jlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read_stdin.h"
#include "rush.h"
#include "rush_dimension.h"
#include "str_funct.h"
#include "other_funct.h"
#include <stdlib.h>

int		main(void)
{
	char	*str;
	t_rush	*vector[5];
	int		x;
	int		y;

	init_vector(vector);
	str = read_stdin();
	x = x_dimension(str);
	y = y_dimension(str);
	check_and_print_first_solution_if_any(vector, str, x, y);
	ft_putchar('\n');
	free(str);
	destroy_vector(vector);
	return (0);
}
