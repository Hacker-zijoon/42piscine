/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 13:55:40 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/06 13:58:21 by jkwon            ###   ########.fr       */
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
	char alph;

	alph = 'a';
	while (alph <= 'z')
	{
		ft_putchar(alph);
		alph++;
	}
}

int		main(void)
{
	ft_print_alpahbet();
	return (0);
}
