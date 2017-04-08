/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 16:40:23 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/07 17:16:13 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_div_mod.c"

int		main(void)
{
	int		a;
	int		b;
	int		*div;
	int		*mod;
	
	a = 15;
	b = 4;
	div = &a;
	mod = &b;
		
	ft_div_mod(a, b, div, mod);
	printf("%d %d\n" , a, b);
//	printf("%p %p\n" , div, mod); 
	return (0);

}
