/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_square.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtang <gtang@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 20:17:58 by gtang             #+#    #+#             */
/*   Updated: 2017/04/26 17:18:18 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIND_SQUARE_H
# define FIND_SQUARE_H

typedef struct
{
	int x;
	int y;
	int size;
}		t_point;

t_point *bsq(char **map);
t_point *compare_square(t_point *point, int size, int max, int min);

#endif
