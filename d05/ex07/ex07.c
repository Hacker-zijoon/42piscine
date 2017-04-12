/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 10:11:59 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/11 10:12:01 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_strncmp.c"
#include <string.h>
#include <stdio.h>

int		main(void)
{
  char str1[15];
  char str2[15];
  int ret;
  int ret2;
  int n = 8;

  strcpy(str1, "ABCd");
  strcpy(str2, "ABCdfds");

  ret = strncmp(str1, str2, n);
  if(ret < 0)
     printf("str1 is less than str2\n");
  else if(ret > 0)
     printf("str1 is greater than str2\n");
  else
     printf("str1 is equal to str2\n");

  ret2 = ft_strncmp(str1, str2, n);
  if(ret2 < 0)
     printf("str1 is less than str2");
  else if(ret2 > 0)
     printf("str1 is greater than str2");
  else
     printf("str1 is equal to str2");
  return (0);
}
