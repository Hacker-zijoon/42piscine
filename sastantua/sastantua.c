/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 15:24:51 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/09 20:29:29 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_char_repeat(int length, char c)
{
	while (length - 2 > 0)
	{
		ft_putchar(c);
		length--;
	}
	return (0);
}

int		ft_add_star(int line)
{
	int		add;

	add = 1;
	if (line > 3)
	{
		if (line % 2 == 0)
			add += line;
		else
			add += (line - 1);
		ft_add_star(line - 1);
	}
	return (add);
}

int		ft_add_line(int size, int line)
{
	while ( --size  >=  1)
		line += size + 2;

	return (line);
}

int		put_char(int size)
{
	int line;
	int length;
	int linemod;

	line = size + 2;

	if ( size > 1)
	{
		linemod = ft_add_line(size, line);
	}

	plusstar = ft_add_star(line)
	length = linemod * 2 + plusstar;

	while (linemod > 1)
	{
		ft_putchar('/');
		ft_char_repeat(lenth -2, '*');
		ft_putchar('\\');
		linemod--;
	}

void	sastantua(int size)
{
	if (size <= 0)
		return (0);
	put_char(size);

}
