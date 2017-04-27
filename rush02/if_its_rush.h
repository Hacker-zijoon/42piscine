/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_its_rush.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 07:43:14 by jlopes            #+#    #+#             */
/*   Updated: 2017/04/23 23:21:25 by jlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IF_ITS_RUSH_H
# define IF_ITS_RUSH_H

int	if_its_rush(t_rush *rush, char *str, int x, int y);
int	check_header(t_rush *rush, char *str, int x);
int check_content(t_rush *rush, char *str, int x, int y);
int	check_footer(t_rush *rush, char *str, int x, int y);
#endif
