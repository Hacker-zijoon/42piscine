/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 09:38:58 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/14 15:38:01 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_wordcount(char *str)
{
	int		cnt;
	int		i;
	int		prespace;
	int		prechar;

	i = 0;
	cnt = 0;
	prespace = 1;
	prechar = 0;
	while (str[i])
	{
		if ((str[i] != '\n' && str[i] != ' ' && str[i] != '\t') && !prechar)
		{
			prespace = 0;
			prechar = 1;
			cnt++;
		}
		if ((str[i] == '\n' || str[i] == ' ' || str[i] == '\t') && !prespace)
		{
			prespace = 1;
			prechar = 0;
		}
		i++;
	}
	return (cnt);
}

int		ft_wordlength(char *str, int i)
{
	int length;

	length = 0;
	while (str[i] && (str[i] != '\n') && (str[i] != ' ') && (str[i] != '\t'))
	{
		length++;
		i++;
	}
	return (length);
}

char	**ft_split_whitespaces(char *str)
{
	char	**ptr;
	int		i;
	int		j;
	int		m;

	i = 0;
	j = 0;
	ptr = (char**)malloc(sizeof(char *) * (ft_wordcount(str) + 1));
	ptr[ft_wordcount(str)] = NULL;
	while (str[i])
	{
		m = 0;
		while (str[i] && (str[i] == '\t' || str[i] == ' ' || str[i] == '\n'))
			i++;
		if (j == ft_wordcount(str))
			return (ptr);
		ptr[j] = (char*)malloc(sizeof(char) * (ft_wordlength(str, i) + 1));
		while (str[i] && str[i] != '\t' && str[i] != ' ' && str[i] != '\n')
			ptr[j][m++] = str[i++];
		ptr[j][m] = '\0';
		j++;
		i++;
	}
	return (ptr);
}
