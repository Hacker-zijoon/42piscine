/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 18:02:15 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/08 18:29:26 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		a;

	a = 2;
	while (a < 46350)
	{
		if (nb % a == 0)
			return (0);
		a++;
	}
	return (1);
}
