/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kberon <kberon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 00:11:53 by kberon            #+#    #+#             */
/*   Updated: 2017/02/05 14:17:17 by kberon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "fillit.h"

char	**ft_put_tetri(t_coord tetri, char **map, int x, int y)
{
	int		i;

	i = -1;
	while (++i < 4)
	{
		tetri.ix = x + tetri.x[i];
		tetri.iy = y + tetri.y[i];
		if (map[tetri.iy][tetri.ix] == '.')
			; // pause la piece
		else
			; // sinon return 0
	}
	return (1);













	return (map);
	int		hash;

	hash = 0;
	x = 0;
	while (map[x])
	{
		y = 0;
		while (map[x][y])
		{
			if (tetri.x[hash] == x && tetri.y[hash] == y && map[x][y] == '.')
			{
				map[x][y] = tetri.letter;
				hash++;
			}
			y++;
		}
		x++;
	}
	return (map);
}

char	**ft_delete_tetri(t_coord tetri, char **map)
{
	int		x;
	int		y;

	x = 0;
	while (map[x])
	{
		y = 0;
		while (map[x][y])
		{
			if (map[x][y] == tetri.letter)
				map[x][y] = '.';
			y++;
		}
		x++;
	}
	return (map);
}
