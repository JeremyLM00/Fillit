/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoisn <jechoisn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 15:34:41 by jechoisn          #+#    #+#             */
/*   Updated: 2017/02/05 14:08:55 by kberon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

#include "libft.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

# define BUF_SIZE 2048

typedef struct		s_coord
{
	int				x[4];
	int				y[4];
	int				ix;
	int				iy;
	char			letter;
}					t_coord;

char				**ft_newmap(char **map);
char				**ft_solve(t_coord tetri, char **map);
char				**ft_put_tetri(t_coord tetri, char **map);
char				**ft_delete_tetri(t_coord tetri, char **map);
t_coord				*ft_coord(char ***tab, t_coord *tetri);
char				***tab_left_once(char ***tab);
char				***tab_up_once(char ***tab);
char				***ft_parse(char ***tab, char *av);

#endif
