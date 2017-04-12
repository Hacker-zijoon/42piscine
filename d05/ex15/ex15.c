/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex15.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 17:05:27 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/11 17:05:29 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "ft_str_is_printable.c"

int main()
{
   char str[] = "";
   int result;

   result = ft_str_is_printable(str);
   printf("%d\n", result);

   return(0);
}
