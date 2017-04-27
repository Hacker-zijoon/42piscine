/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 11:12:33 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/26 19:27:37 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "readmap.h"
#include "ft_func.h"
#include "find_square.h"

char **g_map;

int		main(int ac, char **av)
{
	int		fd;
	int		i;
	int		flag;

	flag = 0;
	if (ac >= 2)
	{
		i = 1;
		while (i < ac)
		{
			if (flag == 1)
				ft_putchar('\n');
			fd = open(av[i++], O_RDONLY);
			if (read_map(fd))
			{
				ft_print_bsq();
			}
			flag = 1;
			close(fd);
		}
	}
	else
		ft_putstr("map error\n");
	return (0);
}
