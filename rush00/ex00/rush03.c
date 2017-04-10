/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpierce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 14:27:26 by bpierce           #+#    #+#             */
/*   Updated: 2017/04/09 13:59:03 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_char_repeater(int i, char c)
{
	while (i > 0)
	{
		ft_putchar(c);
		i--;
	}
	return (0);
}

int		ft_put_top_line(int i)
{
	if (i == 1)
		ft_putchar('A');
	if (i == 2)
	{
		ft_putchar('A');
		ft_putchar('C');
	}
	if (i >= 3)
	{
		ft_putchar('A');
		ft_char_repeater(i - 2, 'B');
		ft_putchar('C');
	}
	ft_putchar('\n');
	return (0);
}

int		ft_put_middle_lines(int width, int height)
{
	int counter;

	counter = height - 2;
	if (height <= 2)
		return (0);
	while (counter-- > 0)
	{
		if (width == 1)
			ft_putchar('B');
		else if (width == 2)
		{
			ft_putchar('B');
			ft_putchar('B');
		}
		else if (width >= 3)
		{
			ft_putchar('B');
			ft_char_repeater(width - 2, ' ');
			ft_putchar('B');
		}
		ft_putchar('\n');
	}
	return (0);
}

int		ft_put_last_line(int i, int height)
{
	if (height == 1)
		return (0);
	if (i == 1)
		ft_putchar('A');
	else if (i == 2)
	{
		ft_putchar('A');
		ft_putchar('C');
	}
	else if (i >= 3)
	{
		ft_putchar('A');
		ft_char_repeater(i - 2, 'B');
		ft_putchar('C');
	}
	ft_putchar('\n');
	return (0);
}

int		rush(int width, int height)
{
	if ((width <= 0) || (height <= 0))
		return (0);
	ft_put_top_line(width);
	ft_put_middle_lines(width, height);
	ft_put_last_line(width, height);
	return (0);
}
