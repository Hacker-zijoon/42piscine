/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stdin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 21:42:34 by jlopes            #+#    #+#             */
/*   Updated: 2017/04/23 23:32:39 by jlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read_stdin.h"
#include "str_funct.h"
#include <stdlib.h>
#include <unistd.h>
#define BUF_SIZE 40960

char	*read_stdin(void)
{
	char	*s1;
	char	*s2;
	int		ret;

	s1 = (char*)malloc(sizeof(char));
	s1[0] = '\0';
	s2 = (char*)malloc(sizeof(char) * (BUF_SIZE + 1));
	while ((ret = read(0, s2, BUF_SIZE)))
	{
		s2[ret] = '\0';
		s1 = realloc_and_strcat(s1, s2);
	}
	free(s2);
	return (s1);
}
