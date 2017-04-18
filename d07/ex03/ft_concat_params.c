/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 23:22:32 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/13 09:37:44 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char **argv)
{
	int		cnt;

	cnt = 0;
	while (argv[cnt] != '\0')
	{
		cnt++;
	}
	return (cnt);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*ptr;
	int		i;
	int		j;
	int		m;

	i = 1;
	j = 0;
	m = 0;
	ptr = (char*)malloc(sizeof(argv) * (ft_strlen(argv) + 1));
	while (i < argc)
	{
		while (argv[i][j])
		{
			ptr[m++] = argv[i][j++];
		}
		if (i < argc - 1)
			ptr[m++] = '\n';
		j = 0;
		i++;
	}
	ptr[m] = '\0';
	return (ptr);
}
