/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkinput.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 13:22:13 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/22 13:22:40 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "eval.h"

int		ft_bracket(char c)
{
		if (c == '(' || c == ')')
			return (1);
		return (0);
}

int		ft_operation(char c)
{
	if (c == '+' || c == '-')
		return (1);
	if (c == '*' || c == '/' || c == '%')
		return (1);
	return (0);
}

int		ft_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int		ft_integear(char c)
{
		if (c >= '0' && c <= '9')
			return (1);
		return (0);
}

int		ft_checkinput(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (ft_integear(str[i]))
		{
			i++;
		}
		if (ft_operation(str[i]))
			i++;
		if (ft_space(str[i]))
			i++;
		if (ft_bracket(str[i]))
			i++;
		return (0);
	}
	return (1);
}
