/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 23:12:29 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/10 16:48:35 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strncpy.c"
#include <string.h>
#include <stdio.h>

int		main(void)
{
	char dest[] = "HeyHeyHey";
	char src[] = "qwer";
	char dest2[] = "HeyHeyHey";
	char src2[] = "qwer";
	int a = 5;

	printf("%s\n%s\n%d\n\n", dest, src ,a);
	strncpy(dest, src, a);
	printf("%s\n%s\n%d\n\n", dest, src ,a);

	printf("%s\n%s\n%d\n\n", dest2, src2 ,a);
	ft_strncpy(dest2, src2, a);
	printf("%s\n%s\n%d\n", dest2, src2 ,a);

	return (0);
}
