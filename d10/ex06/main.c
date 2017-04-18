/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 18:03:15 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/18 01:05:23 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		ft_arg3condition(char arg2, int arg3)
{
	if (arg2 == '/')
	{
		if (arg3 == 0)
		{
			ft_putstr("Stop : division by zero");
			return (1);
		}
	}
	if (arg2 == '%')
	{
		if (arg3 == 0)
		{
			ft_putstr("Stop : modulo by zero");
			return (1);
		}
	}
	return (0);
}

void	ft_arg2condition(char *arg2, int arg1, int arg3)
{
	if (arg2[0] == '+')
		ft_putnbr(op_array[0](arg1, arg3));
	else if (arg2[0] == '-')
		ft_putnbr(op_array[1](arg1, arg3));
	else if (arg2[0] == '*')
		ft_putnbr(op_array[2](arg1, arg3));
	else if (arg2[0] == '/')
	{
		if (ft_arg3condition(arg2[0], arg3) == 0)
			ft_putnbr(op_array[3](arg1, arg3));
	}
	else if (arg2[0] == '%')
	{
		if (ft_arg3condition(arg2[0], arg3) == 0)
			ft_putnbr(op_array[4](arg1, arg3));
	}
	else
		ft_putchar('0');
}

int		main(int argc, char **argv)
{
	int		arg1;
	int		arg3;

	if (argc != 4)
		return (0);
	arg1 = ft_atoi(argv[1]);
	arg3 = ft_atoi(argv[3]);
	op_array[0] = add;
	op_array[1] = minus;
	op_array[2] = multiply;
	op_array[3] = divide;
	op_array[4] = modulo;

	ft_arg2condition(argv[2], arg1, arg3);
	return (0);
}
