/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 18:38:35 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/12 10:45:58 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strstr.c"
#include <string.h>
#include <stdio.h>

int		main(void)
{
	char str[] = "i lov u ve vehk hk";
	char* to_find = "vehk";
	char* result;
	char* result2;

	printf("%s\n", str);
	result = strstr(str, to_find);
	printf("%s\n", result);

	result2 = ft_strstr(str, to_find);
	printf("%s\n", result2);
	return (0);
}
