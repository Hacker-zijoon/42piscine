/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 11:43:55 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/08 11:56:04 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		tmp;

	tmp = nb;
	if (power < 0)
		return (0);
	else
	{
		while (power != 1)
		{
			nb *= tmp;
			power--;
		}
		return (nb);
	}
}
