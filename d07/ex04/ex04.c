/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 09:39:46 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/13 09:39:47 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_split_whitespaces.c"
// #include "ft_split_whitespaces.c"

int		main(void)
{
		char str[] = " aa	 bb 	 asf \t fsdf  \n sadf dsa f aa \n  ";

		char **result;
    int   i = 0;

    result = ft_split_whitespaces(str);

    while (result[i])
    {
  	  printf("%s\n" , result[i]);
      i++;
    }

		return (0);
}
