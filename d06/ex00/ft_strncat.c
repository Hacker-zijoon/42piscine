/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 19:48:07 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/11 19:48:32 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncat(char *dest, char *src, int nb)
{
	char *tmp;

	tmp = dest;
	while (*dest != '\0')
	{
		++dest;
	}
	while (*src != '\0' && nb > 0)
	{
		*dest = *src;
		++dest;
		++src;
		nb--;
	}
	*dest = '\0';
	return (tmp);
}