/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 18:38:35 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/10 18:38:37 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strstr.c"
#include <string.h>
#include <stdio.h>

int		main(void)
{
	char str[] = "I lov e veh you ve ev vehk you vehk yu";
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
