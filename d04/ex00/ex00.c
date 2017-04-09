/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 10:43:21 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/08 13:48:20 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_iterative_factorial.c"

int		main(void)
{
	int x = ft_iterative_factorial(3);
	printf("%d" , x);
	return (0);
}
