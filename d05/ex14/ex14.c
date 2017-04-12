/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex14.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 17:02:17 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/11 17:02:19 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_str_is_uppercase.c"

int main()
{
   char str[] = "ASD";
   int result;

   result = ft_str_is_uppercase(str);
   printf("%d\n", result);

   return(0);
}
