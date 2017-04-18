/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 19:31:59 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/12 19:32:13 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_strdup.c"

int		main(void)
{
		char* src = "aadfsfsdfsd";
		char* ptr = "as";
		char* ptr2 = "as";

		ptr = strdup(src);
		printf("%s\n" , ptr);
		ptr2 = ft_strdup(src);
		printf("%s\n" , ptr2);
		free(ptr2);
		free(ptr);

		return (0);
}
