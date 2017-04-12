/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 15:14:45 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/11 15:20:54 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_checknumber(char *str, int i)
{
	if (str[i] >= 48 && str[i] <= 57)
		return (1);
	return (0);
}

int		ft_str_is_numeric(char *str)
{
	int		i;
	int		j;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		j = ft_checknumber(str, i);
		if (j == 1)
			i++;
		else
			return (0);
	}
	return (j);
}
