/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 12:38:39 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/11 12:38:57 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_checkcharacter(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
		return (1);
	if (str[i] >= 'a' && str[i] <= 'z')
		return (1);
	if (str[i] >= '0' && str[i] <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((ft_checkcharacter(str, i) == 1))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			i++;
			while (str[i] != '\0' && (ft_checkcharacter(str, i) == 1))
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] += 32;
				else
					str[i] = str[i];
				i++;
			}
		}
		i++;
	}
	return (str);
}
