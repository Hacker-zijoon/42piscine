/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 10:27:30 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/15 19:16:43 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int        match(char *s1, char *s2)
{
    if (*s1 == '\0' && *s2 == '\0')
         return (1);
    if (*s1 == *s2 && *s1 != '*')
        return (match(s1 + 1, s2 + 1));
    if (*s2 == '*' && *s1 == '\0')
        return (match(s1, s2 + 1));
    if (*s2 == '*' && *s1 != '\0')
        return (match(s1 + 1, s2) || match(s1, s2 + 1));
    return (0);
}


int   main(void)
{
  char s1[12] = "abcvbcbcbbc";
	char s2[11] = "a*b*bc";

  int x = (match(s1,s2));
  printf("%d\n", x);

  return (0);
}
