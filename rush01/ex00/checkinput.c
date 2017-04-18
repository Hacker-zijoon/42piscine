/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkinput.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 22:52:21 by jhu               #+#    #+#             */
/*   Updated: 2017/04/16 22:52:22 by jhu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_integar_dot(char c)
{
	if (((c >= '0') && (c <= '9')) || (c == '.'))
		return (1);
	else
		return (0);
}

int		check_input(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	if (argc != 10)
		return (0);
	while (i < 10)
	{
		while (argv[i][j])
		{
			if (check_integar_dot(argv[i][j]) == 0)
				return (0);
			j++;
		}
		if ((i != 10) && (j != 9))
			return (0);
		j = 0;
		i++;
	}
	return (1);
}
