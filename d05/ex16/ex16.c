/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex16.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 17:30:29 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/11 17:30:33 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strcat.c"

int main( void)
{
   char  dest[10] = "hey";
   char  src[] = "gogogo";

  // strcat( dest, src);
   // printf( "%s\n", dest);

   ft_strcat(dest, src);
   printf( "%s\n", dest);

   return (0);
}
