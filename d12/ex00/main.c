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

#include "ex00.h"

int ac_check(int ac)
{
	if (ac == 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	if (ac > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	return (1);
}

int		main(int ac, char **av)
{
	int	fd;
	int	ret;
	char	buf[BUF_SIZE + 1];

	if (ac_check(ac))
	{
		fd = open(av[1], O_RDONLY);
		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	return (0);
}
