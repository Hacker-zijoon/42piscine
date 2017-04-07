/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 22:25:09 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/06 14:34:17 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_comb(void)
{
	char	dgt[3];

	dgt[0] = '0';
	while (dgt[0] <= '7')
	{
		dgt[1] = dgt[0] + 1;
		while (dgt[1] <= '8')
		{
			dgt[2] = dgt[1] + 1;
			while (dgt[2] <= '9')
			{
				ft_putchar(dgt[0]);
				ft_putchar(dgt[1]);
				ft_putchar(dgt[2]);
				if (dgt[0] != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				dgt[2]++;
			}
			dgt[1]++;
		}
		dgt[0]++;
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
