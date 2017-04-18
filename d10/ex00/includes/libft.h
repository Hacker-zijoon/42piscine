/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 13:07:03 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/17 14:15:27 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

char	*ft_strcat(char *dest, char *src);

int		ft_strcmp(char *s1, char *s2);

char	*ft_strcpy(char *dest, char *src);

int		ft_strlen(char *str);

char	*ft_strncat(char *dest, char *src, int nb);

char	*ft_strncpy(char *dest, char *src, unsigned int n);

void	ft_swap(int *a, int *b);
#endif
