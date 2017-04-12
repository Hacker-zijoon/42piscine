/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex09.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 12:35:22 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/11 12:35:26 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <ctype.h>
#include "ft_strlowcase.c"

int main()
{
   int i = 0;
   char str[] = "Tutorials Point 123 zZzZ";
   char *result;

   while(str[i])
   {
      putchar (tolower(str[i]));
      i++;
   }
   result = ft_strlowcase(str);
   printf("\n%s\n", result);

   return(0);
}
