/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 18:38:00 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/08 22:16:37 by jkwon            ###   ########.fr       */
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

int		ft_find_next_prime(int nb)
{
	int		i;

	i = nb;
	while (i <= 2147483647)
	{
		if (ft_is_prime(i) == 1)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
