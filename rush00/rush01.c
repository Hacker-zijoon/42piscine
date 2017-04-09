/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 16:00:18 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/08 23:58:21 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		a;
	int		b;

	a = 1;
	b = 1;
	while (a <= x)
	{
		while (b <= y)
		{
			if (( a == 1 && b == 1)||(x != 1 && y != 1))
				ft_putchar(47);
			else if (( a == 1 && b < y)||( a == x || b < y))
				ft_putchar(42);
			else if (( a == 1 && b == y)||( a == x && b == 1)
				ft_putchar(92);
			else if (( 
				ft_putchar(" ");
			b++;
		}
		b = 1;
		a++;
	}
}
