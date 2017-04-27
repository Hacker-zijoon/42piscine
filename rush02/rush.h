/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 07:49:11 by jlopes            #+#    #+#             */
/*   Updated: 2017/04/23 07:50:19 by jlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

typedef struct	s_rush
{
	char	header[3];
	char	content[3];
	char	footer[3];
}				t_rush;

t_rush			*init_rush_00(void);
t_rush			*init_rush_01(void);
t_rush			*init_rush_02(void);
t_rush			*init_rush_03(void);
t_rush			*init_rush_04(void);
#endif
