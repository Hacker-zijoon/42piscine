/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 20:35:50 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/12 22:03:14 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int length;
	int i;
	int *ptr;

	length = max - min;
	i = 0;
	if (length <= 0)
	{
		return (0);
	}
	ptr = (int*)malloc(sizeof(ptr) * length);
	while (i < length)
	{
		ptr[i] = min++;
		i++;
	}
	return (ptr);
}
