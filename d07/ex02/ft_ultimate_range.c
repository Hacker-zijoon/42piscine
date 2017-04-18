/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 22:03:38 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/12 23:21:43 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int length;
	int i;
	int *ptr;

	length = (max - min);
	i = 0;
	if (length <= 0)
	{
		*range = 0;
		return (0);
	}
	else
	{
		ptr = (int*)malloc(sizeof(int) * length);
		while (i != length)
		{
			ptr[i] = min++;
			i++;
		}
		*range = ptr;
	}
	return (i);
}
