/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex17.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 19:48:40 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/11 19:48:41 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strncat.c"

int main( void)
{
   char  dest[10] = "hey";
   char  src[] = "gogogo";
   int   a = 3;

  // strcat( dest, src);
   // printf( "%s\n", dest);

   ft_strncat(dest, src, a);
   printf( "%s\n", dest);

   return (0);
}
