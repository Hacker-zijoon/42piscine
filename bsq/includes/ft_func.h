/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 17:44:08 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/26 18:52:42 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FUNC_H
# define FT_FUNC_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		ft_atoi(char *str);

void	ft_print_x(char **map, int x, int y, int size);

void	ft_print_solution(char **g_map);

void	ft_print_bsq(void);

#endif
