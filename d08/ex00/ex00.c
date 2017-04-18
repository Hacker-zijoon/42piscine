/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 09:39:46 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/14 22:42:36 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_split_whitespaces.c"
// #include "ft_split_whitespaces.c"

int		main(void)
{
		char str[] = "		 bksda #$asfs fdskaf    sdlafj asdf 		2		";

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
