/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 14:15:36 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/23 14:15:37 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "eval.h"

int   ft_integearlength(int a)
{
  int   length;

  length = 0;
  while (a / 10 > 0)
  {
    a = a / 10;
    length ++;
  }
  return (length + 1);
}

int   solution(char *str)
{
  int   i;
  int   length;

  i = 0;

  while (str[i])
  {
  	if (ft_integear(str[i]))
    {
      stack.operand[stack.opd_location] = ft_atoi(str);
      length = ft_integearlength(stack.operand[stack.opd_location++]);
      while (1 <= length)
      {
        i++;
        str++;
        length--;
      }
     if (ft_operation(str[i]))
     {

     }

     if (ft_space(str[i]))
     {

     }

    }

  }
  return (0);
}
