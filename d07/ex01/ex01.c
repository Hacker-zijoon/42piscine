/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 20:37:49 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/13 20:56:36 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_range.c"

int		main(void)
{
		int *ptr2;
    int i;
		int min;
		int max;
		int diff;

		min = 10;
		max = 15;
		diff = max - min;
		ptr2 = ft_range(min, max);
    i = 0;
    while (min < max)
    {
		  printf("%d\n", ptr2[i]);
      i++;
			min++;
    }
		return (0);
}
