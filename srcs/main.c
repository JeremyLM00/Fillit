/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jechoisn <jechoisn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 13:15:02 by jechoisn          #+#    #+#             */
/*   Updated: 2017/02/05 11:31:04 by kberon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	char	***tab;
	char	**map;
	int		i;
	int		j;
	t_coord *tetri;

	if (!(tetri = (t_coord*)ft_memalloc(sizeof(tetri) * 26)))
		return (-1);
	tab = ft_parse(tab, av[1]);
	tab = tab_up_once(tab);
	tab = tab_left_once(tab);
	tetri = ft_coord(tab, tetri);
	map = ft_newmap(map);
	i = -1;
	while (tab[++i])
	{
		ft_put_tetri(tetri[i], map);
		ft_delete_tetri(tetri[i], map);
	}
	i = 0;
	while (map[i])
		ft_putendl(map[i++]);
	return (0);
}
