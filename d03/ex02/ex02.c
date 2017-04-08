/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 15:23:35 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/07 16:35:59 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_swap.c"

/*
void	ft_putchar(char ptr);
void	ft_putnbr(int ptr);
void	ft_putaddr(void * ptr);
*/

int		main(void)
{
	int		a;
	int		b;
	
	a = 5;
	b = 7;
	
	printf("%d %d \n", a ,b);
	
	ft_swap(&a,&b);

	printf("%d %d\n", a , b);

	return (0);
}
