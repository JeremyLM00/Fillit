/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoisn <jechoisn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 15:34:41 by jechoisn          #+#    #+#             */
/*   Updated: 2016/12/12 16:52:35 by kberon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

#include "libft.h"
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

# define BUF_SIZE 2048

typedef struct		s_data
{
	char			tetri[26][30];
	int				tetri_x;
	int				tetri_y;
}					t_data;

t_data				*data();
void				read_stdin(int ret, int i, t_data *d);
void				exitt(int error, char *msg);

#endif
