/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 15:21:46 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/11 15:22:12 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_checklowercase(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
		return (1);
	return (0);
}

int		ft_str_is_lowercase(char *str)
{
	int		i;
	int		j;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		j = ft_checklowercase(str, i);
		if (j == 1)
			i++;
		else
			return (0);
	}
  return (j);
}
