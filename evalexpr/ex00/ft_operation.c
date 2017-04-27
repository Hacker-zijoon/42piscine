/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 16:24:49 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/18 16:47:27 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		add(int a, int b)
{
	return (a + b);
}

int		minus(int a, int b)
{
	return (a - b);
}

int		multiply(int a, int b)
{
	return (a * b);
}

int		divide(int a, int b)
{
	return (a / b);
}

int		modulo(int a, int b)
{
	return (a % b);
}
