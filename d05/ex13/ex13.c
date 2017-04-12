/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex13.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 15:22:29 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/11 15:22:31 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_str_is_lowercase.c"

int main()
{
   char str[] = "adcd";
   int result;

   result = ft_str_is_lowercase(str);
   printf("%d\n", result);

   return(0);
}
