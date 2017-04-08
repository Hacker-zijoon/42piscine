/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 23:24:18 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/07 23:31:28 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include "ft_strlen.c"

int		ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}

int		main(void)
{
	int cnt = ft_strlen("asdfasdf");
	printf("%d is the number!", cnt);
	return (0);
}
