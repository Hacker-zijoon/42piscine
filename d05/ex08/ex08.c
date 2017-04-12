/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 11:27:58 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/11 11:27:59 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "ft_strupcase.c"

int main()
{
   int i = 0;
   char str[] = "Tutorials Point 123 zZzZ";
   char *result;

   while(str[i])
   {
      putchar (toupper(str[i]));
      i++;
   }

   result = ft_strupcase(str);
   printf("\n%s\n", result);

   return(0);
}
