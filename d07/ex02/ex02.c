/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 22:04:17 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/12 22:04:19 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_ultimate_range.c"

int		main(void)
{
		int* ptr2;
    int size;
    int i;
		int min;
		int max;

		min = -10;
		max = 30;

    i = 0;
		size = ft_ultimate_range(&ptr2, min, max);

		while (min < max)
		{
			printf("%d\n", ptr2[i]);
			i++;
			min++;
		}
	 printf("This is size : %d\n" , size);

		return (0);
}
