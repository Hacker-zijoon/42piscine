/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 21:05:13 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/06 14:01:30 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_alpahbet(void)
{
	char alph;

	alph = 'a';
	while (alph <= 'z')
	{
		ft_putchar(alph);
		alph++;
	}
}