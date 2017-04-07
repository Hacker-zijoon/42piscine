/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 23:39:53 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/06 23:41:26 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_display(int nb)
{
	int cnt;
	int cnt2;
	int temp;
	int x;

	cnt = 0;
	temp = nb;
	x = 1;
	while ((temp /= 10) != 0)
	{
		cnt++;
	}
	cnt2 = cnt;
	while (cnt2 >= 2)
	{
		x *= 10;
		cnt--;
	}
	while (cnt != 0)
	{
		ft_putchar(nb / x + 48);
		nb %= x;
		x /= 10;
		cnt--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
		ft_display(nb);
	}
	else if (nb == 0)
	{
		ft_putchar('0');
	}
	else
	{
		ft_display(nb);
	}
}
