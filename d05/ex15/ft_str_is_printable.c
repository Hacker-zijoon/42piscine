/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 17:04:57 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/11 17:28:42 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_checkprintable(char *str, int i)
{
	if (str[i] >= 32 && str[i] <= 126)
		return (1);
	return (0);
}

int		ft_str_is_printable(char *str)
{
	int		i;
	int		j;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		j = ft_checkprintable(str, i);
		if (j == 1)
			i++;
		else
			return (0);
	}
	return (j);
}
