/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex11.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 14:48:45 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/11 14:48:46 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_str_is_alpha.c"

int main()
{
   char str[] = "asAAda";
   int result;

   result = ft_str_is_alpha(str);
   printf("%d\n", result);

   return(0);
}
