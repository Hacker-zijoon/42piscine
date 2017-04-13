/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 00:51:36 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/11 00:51:40 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcmp.c"
#include <string.h>
#include <stdio.h>

int		main(void)
{
	char str1[15];
	char str2[15];
	int ret;
	int ret2;

	strcpy(str1, "asdfasdh");
	strcpy(str2, "asdfasdhadf");

	ret = strcmp(str1, str2);
  printf("%d\n", ret);

	ret2 = ft_strcmp(str1, str2);
  printf("%d\n", ret2);
	return (0);
}
