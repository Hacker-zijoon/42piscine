/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex10.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 12:39:07 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/11 12:39:08 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strcapitalize.c"

int main()
{
   char str[] = "tuTORials, Point 123mots zZzZ [xyz]c; v-vD cin+et+um .zdfGG";
   char *result;

   result = ft_strcapitalize(str);
   printf("\n%s\n", result);

   return(0);
}
