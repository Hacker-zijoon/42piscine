/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 23:12:29 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/09 23:16:59 by jkwon            ###   ########.fr       */
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
	ft_putstr("Hello");
	return (0);
}
