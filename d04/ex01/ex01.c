/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 09:44:23 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/08 10:38:26 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_iterative_factorial.c"

int		main(void)
{
	int x = ft_iterative_factorial(5);
	printf("%d", x);
	return(0);
}
