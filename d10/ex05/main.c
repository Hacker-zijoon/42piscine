/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 09:08:22 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/18 09:14:43 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_is_sort.c"

int		ft_check(int a, int b)
{
	if (a < b)
		return (-1);
	else if (a == b)
		return (0);
	else
		return (1);
}

int		main(void)
{
	int tab[10] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
	int check = 1;
	int check2 = 0;

	int (*ptr)(int, int);
	ptr = &ft_check;


	if ((ft_is_sort(tab, 10, ptr) != 1))
		printf("%d\n" , check2);
	else
		printf("%d\n" , check);

	return (0);
}
