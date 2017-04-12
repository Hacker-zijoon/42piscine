/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 23:06:52 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/10 08:54:59 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		ft_putchar(str[cnt]);
		cnt++;
	}
}
