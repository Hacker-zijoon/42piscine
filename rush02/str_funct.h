/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_funct.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 07:52:02 by jlopes            #+#    #+#             */
/*   Updated: 2017/04/23 07:52:05 by jlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_FUNCTIONS_H
# define STRING_FUNCTIONS_H

void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
char	*realloc_and_strcat(char *s1, char *s2);
void	ft_putnbr(int n);
#endif
