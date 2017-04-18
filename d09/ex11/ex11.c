/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex11.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 16:34:17 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/14 16:35:52 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_perso.h"

int		main()
{
	t_perso		jack;

	jack.name = strdup("Jack");
	jack.life = 100.0;
	jack.age = 42;
	jack.profession = SAVE_THE_WORLD;
	return (0);
}
