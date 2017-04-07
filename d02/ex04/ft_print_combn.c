/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 02:05:03 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/06 14:35:46 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		}
		dgt[1]++;
	}
	dgt[0]++;
}
