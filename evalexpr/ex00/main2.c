/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 18:03:15 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/19 09:08:41 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		ft_arg3condition(char arg2, int arg3)
{
	if (arg2 == '/')
	{
		if (arg3 == 0)
		{
			ft_putstr("Stop : division by zero\n");
			return (1);
		}
	}
	if (arg2 == '%')
	{
		if (arg3 == 0)
		{
			ft_putstr("Stop : modulo by zero\n");
			return (1);
		}
	}
	return (0);
}

void	arg2c(int (**op_arr)(int, int), char *arg2, int arg1, int arg3)
{
	if (arg2[0] == '+')
		ft_putnbr(op_arr[0](arg1, arg3));
	else if (arg2[0] == '-')
		ft_putnbr(op_arr[1](arg1, arg3));
	else if (arg2[0] == '*')
		ft_putnbr(op_arr[2](arg1, arg3));
	else if (arg2[0] == '/')
	{
		if (ft_arg3condition(arg2[0], arg3) == 0)
			ft_putnbr(op_arr[3](arg1, arg3));
	}
	else if (arg2[0] == '%')
	{
		if (ft_arg3condition(arg2[0], arg3) == 0)
			ft_putnbr(op_arr[4](arg1, arg3));
	}
	else
		ft_putstr("0\n");
}

int		main(int argc, char **argv)
{
	int		arg1;
	int		arg3;
	t_opr	op_arr[5];

	if (argc != 4)
		return (0);
	arg1 = ft_atoi(argv[1]);
	arg3 = ft_atoi(argv[3]);
	op_arr[0] = add;
	op_arr[1] = minus;
	op_arr[2] = multiply;
	op_arr[3] = divide;
	op_arr[4] = modulo;
	arg2c(op_arr, argv[2], arg1, arg3);
	return (0);
}
