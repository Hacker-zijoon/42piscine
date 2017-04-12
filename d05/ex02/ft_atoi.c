/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 00:16:18 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/10 13:57:21 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_whitespace(int i, char *str)
{
	if ((str[i] == '\n') || (str[i] == '\r') || (str[i] == '\t'))
		return (1);
	else if ((str[i] == '\v') || (str[i] == '\f') || (str[i] == ' '))
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
	while (ft_whitespace(i, str) == 1)
		i++;
	if (str[i] == '-')
	{
		minus = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	if (str[i] >= '0' && str[i] <= '9')
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			num = (num * 10) + (str[i] - '0');
			i++;
		}
	}
	return (num * minus);
}
