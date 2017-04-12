/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 23:12:29 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/10 16:47:00 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcpy.c"
#include <string.h>
#include <stdio.h>

int		main(void)
{
	char dest[] = "Hello this is Jun / Hello this is Jun";
	char src[] = "Hello this is";


	ft_strcpy(dest, src);

	printf("%s\n%s\n", dest, src);

	return (0);
}
