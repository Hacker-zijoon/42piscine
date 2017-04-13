/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 18:37:53 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/12 10:02:33 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	j = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		while ((str[i] == to_find[j]) || (to_find[j] == '\0'))
		{
			if (to_find[j] == '\0')
			{
				tmp = &str[i - j];
			}
			i++;
			j++;
		}
		i++;
	}
	return (tmp);
}
