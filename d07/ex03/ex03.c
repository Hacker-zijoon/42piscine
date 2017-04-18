/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 23:23:07 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/12 23:23:09 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_concat_params.c"

int   main(int argc, char **argv)
{
  printf("%s", ft_concat_params(argc, argv));
  return (0);
}
