/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 22:25:30 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/07 23:02:52 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_putstr.c"

int		ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}

int		main(void)
{
	ft_putstr("asdfasdf");
	return (0);
}
