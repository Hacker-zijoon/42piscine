/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 09:34:19 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/20 11:30:01 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.h"

int		main(int ac, char **av)
{
	int	fd;
	int	ret;
	int	i;
	char	buf[BUF_SIZE + 1];

	if (ac == 1)
	{
		
	}
	i = 1;
	while (i < ac)
	{
		fd = open(av[i], O_RDONLY);
		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';
		ft_putstr(buf);
		i++;
	}
	return (0);
}
