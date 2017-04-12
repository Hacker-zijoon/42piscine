/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex12.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 15:15:34 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/11 15:15:36 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_str_is_numeric.c"

int main()
{
   char str[] = "0";
   int result;

   result = ft_str_is_numeric(str);
   printf("%d\n", result);

   return(0);
}
