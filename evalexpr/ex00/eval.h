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

#ifndef EVAL_H

# define EVAL_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

#define MAX 10000
#define SUM(X,Y) (X)+(Y)
#define MULT(X,Y) (X)*(Y)
#define DIV(X,Y) (X)/(Y)
#define MODUL(X,Y) (X)%(Y)

typedef struct s_stack {
  char  operator[MAX];
  int   operand[MAX];
  int   opt_location;
  int   opd_location;

}             t_stack;
t_stack stack;

void	ft_putnbr(int nb);

void	ft_putchar(char c);

int		ft_atoi(char *str);

int		ft_checkinput(char *str);

int		ft_integear(char c);

int		ft_operation(char c);

int		ft_bracket(char c);

int		ft_space(char c);

#endif
