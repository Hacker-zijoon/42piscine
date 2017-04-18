/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 22:38:46 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/14 11:21:26 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_takes_place(int hour)
{
	int t;

	t = hour;
	if (t > 12)
		t = hour % 12;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour == 0 || hour == 24)
		printf("12.00 A.M. AND 1.00 A.M.\n");
	else if (hour > 0 && hour < 11)
		printf("%d.00 A.M. AND %d.00 A.M.\n", t, t + 1);
	else if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 12)
		printf("12.00 P.M. AND 1.00 P.M.\n");
	else if (hour > 12 && hour < 23)
		printf("%d.00 P.M. AND %d.00 P.M.\n", t, t + 1);
	else if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
}
