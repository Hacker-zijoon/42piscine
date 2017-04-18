/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 10:16:22 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/14 10:49:47 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_uppercase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] >= 'A' && str[i] < 'K')
				str[i] += 16;
			else
				str[i] -= 10;
		}
		i++;
	}
	return (str);
}

char	*ft_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] >= 'a' && str[i] < 'k')
				str[i] += 16;
			else
				str[i] -= 10;
		}
		i++;
	}
	return (str);
}

char	*ft_rot42(char *str)
{
	ft_uppercase(str);
	ft_lowercase(str);
	return (str);
}
