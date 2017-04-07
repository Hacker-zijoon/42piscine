/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 14:21:22 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/06 14:23:45 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_alpahbet(void)
{
	int i;

	i = 122;
	while (i >= 97)
	{
		ft_putchar(i);
		i--;
	}
}

int		main(void)
{
	ft_print_alpahbet();
	return (0);
}
