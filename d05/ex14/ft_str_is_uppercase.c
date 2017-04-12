/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 17:02:05 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/11 17:02:09 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_checkuppercase(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
		return (1);
	return (0);
}

int		ft_str_is_uppercase(char *str)
{
	int		i;
	int		j;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		j = ft_checkuppercase(str, i);
		if (j == 1)
			i++;
		else
			return (0);
	}
  return (j);
}
