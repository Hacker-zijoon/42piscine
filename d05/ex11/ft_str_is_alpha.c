/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 14:48:16 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/11 14:48:35 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_checkcharacter(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
		return (1);
	if (str[i] >= 'a' && str[i] <= 'z')
		return (1);
	return (0);
}

int		ft_str_is_alpha(char *str)
{
	int		i;
	int		j;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		j = ft_checkcharacter(str, i);
		if (j == 1)
			i++;
		else
			return (0);
	}
  return (j);
}
