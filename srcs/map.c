/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kberon <kberon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 00:37:01 by kberon            #+#    #+#             */
/*   Updated: 2017/02/05 14:20:56 by kberon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_newmap(char **map)
{
	int		i;

	i = 0;
	if (!(map = (char**)malloc(sizeof(char *) * 17)))
		return (NULL);
	map[16] = NULL;
	while (i < 16)
	{
		if (!(map[i] = (char*)malloc(sizeof(char) * 17)))
			return (NULL);
//		map[i][17] = '\0';
		ft_memset(map[i], '.', 16);
		i++;
	}
	return (map);
}
