/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 10:42:20 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/08 13:28:55 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		tmp;

	tmp = nb;
	if (tmp < 0 || tmp > 12)
		return (0);
	else
	{
		while (tmp != 1)
		{
			nb *= tmp - 1;
			tmp--;
		}
		return (nb);
	}
}
