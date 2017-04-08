/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 14:47:36 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/07 15:22:36 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include "ft_ultimate_ft.c"

int		main(void)
{
	int a;
	int *nbr1;
	int **nbr2;
	int ***nbr3;
	int ****nbr4;
	int *****nbr5;
	int ******nbr6;
	int *******nbr7;
	int ********nbr8;
	int *********nbr;

	nbr1 = &a;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr = &nbr8;
	ft_ultimate_ft(nbr);
	printf("%d", a);
	return (0);
}
