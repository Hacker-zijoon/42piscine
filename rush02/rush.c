/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 07:48:55 by jlopes            #+#    #+#             */
/*   Updated: 2017/04/23 07:48:59 by jlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <stdlib.h>

t_rush	*init_rush_00(void)
{
	t_rush	*rush;

	rush = (t_rush*)malloc(sizeof(t_rush));
	rush->header[0] = 'o';
	rush->header[1] = '-';
	rush->header[2] = 'o';
	rush->content[0] = '|';
	rush->content[1] = ' ';
	rush->content[2] = '|';
	rush->footer[0] = 'o';
	rush->footer[1] = '-';
	rush->footer[2] = 'o';
	return (rush);
}

t_rush	*init_rush_01(void)
{
	t_rush	*rush;

	rush = (t_rush*)malloc(sizeof(t_rush));
	rush->header[0] = '/';
	rush->header[1] = '*';
	rush->header[2] = '\\';
	rush->content[0] = '*';
	rush->content[1] = ' ';
	rush->content[2] = '*';
	rush->footer[0] = '\\';
	rush->footer[1] = '*';
	rush->footer[2] = '/';
	return (rush);
}

t_rush	*init_rush_02(void)
{
	t_rush	*rush;

	rush = (t_rush*)malloc(sizeof(t_rush));
	rush->header[0] = 'A';
	rush->header[1] = 'B';
	rush->header[2] = 'A';
	rush->content[0] = 'B';
	rush->content[1] = ' ';
	rush->content[2] = 'B';
	rush->footer[0] = 'C';
	rush->footer[1] = 'B';
	rush->footer[2] = 'C';
	return (rush);
}

t_rush	*init_rush_03(void)
{
	t_rush	*rush;

	rush = (t_rush*)malloc(sizeof(t_rush));
	rush->header[0] = 'A';
	rush->header[1] = 'B';
	rush->header[2] = 'C';
	rush->content[0] = 'B';
	rush->content[1] = ' ';
	rush->content[2] = 'B';
	rush->footer[0] = 'A';
	rush->footer[1] = 'B';
	rush->footer[2] = 'C';
	return (rush);
}

t_rush	*init_rush_04(void)
{
	t_rush	*rush;

	rush = (t_rush*)malloc(sizeof(t_rush));
	rush->header[0] = 'A';
	rush->header[1] = 'B';
	rush->header[2] = 'C';
	rush->content[0] = 'B';
	rush->content[1] = ' ';
	rush->content[2] = 'B';
	rush->footer[0] = 'C';
	rush->footer[1] = 'B';
	rush->footer[2] = 'A';
	return (rush);
}
