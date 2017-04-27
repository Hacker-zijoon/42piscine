/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readmap.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkwon <jkwon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 11:21:37 by jkwon             #+#    #+#             */
/*   Updated: 2017/04/26 18:53:41 by jkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READMAP_H
# define READMAP_H

# define BUF_SIZE 7000000
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

int		read_map(int fd);

int		read_map2(char *buf, int ret);

void	read_map3(char *buf, int row, int col, int i);

int		valid_char(char *buf, int col, int i, int cnt);

int		valid_char2(char *g_charcheck, char *buf, int i);

int		valid_char3(int row, int k);

#endif
