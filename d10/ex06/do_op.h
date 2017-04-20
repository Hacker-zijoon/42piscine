/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 00:41:39 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/18 16:19:03 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H

# define DO_OP_H

# include <unistd.h>

int		ft_atoi(char *str);

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_putnbr(int nb);

int		add(int	a, int b);

int		minus(int a, int b);

int		multiply(int a, int b);

int		divide(int a, int b);

int		modulo(int a, int b);

typedef	int		(*t_opr)(int, int);

#endif
