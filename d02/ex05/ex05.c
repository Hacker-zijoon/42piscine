/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 11:02:03 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/06 17:50:29 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_output(int dgt1, int dgt2)
{
	ft_putchar(dgt1 / 10 + 48);
	ft_putchar(dgt1 % 10 + 48);
	ft_putchar(' ');
	ft_putchar(dgt2 / 10 + 48);
	ft_putchar(dgt2 % 10 + 48);
	if ((dgt1 != 98) || (dgt2 != 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int		dgt1;
	int		dgt2;

	dgt1 = 0;
	dgt2 = 0;
	while (dgt1 <= 99)
	{
		while (dgt2 <= 99)
		{
			if (dgt1 < dgt2)
			{
				ft_output(dgt1, dgt2);
			}
			dgt2++;
		}
		dgt2 = 0;
		dgt1++;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
