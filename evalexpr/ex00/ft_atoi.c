/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 21:56:39 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/18 00:40:18 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "eval.h"

int		ft_checkint(int i, char *str)
{
	if (((str[i] >= '0') && (str[i] <= '9')) || (str[i] == '-'))
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int		i;
	int		num;
	int		minus;

	i = 0;
	num = 0;
	minus = 1;
	if (ft_checkint(i, str) == 0)
		return (num * minus);
	if (str[i] == '-')
	{
		minus = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_checkint(i, str) == 1)
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * minus);
}
