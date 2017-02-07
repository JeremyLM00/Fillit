/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kberon <kberon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 17:28:15 by kberon            #+#    #+#             */
/*   Updated: 2017/02/01 04:53:30 by kberon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "fillit.h"
#include "libft.h"

static int		ft_link(char *s)
{
	int		i;
	int		link;

	i = 0;
	link = 0;
	while (s[i] && i < 20)
	{
		if (s[i] == '#')
		{
			if (i - 1 >= 0 && s[i - 1] == '#')
				link++;
			if (i + 1 <= 21 && s[i + 1] == '#')
				link++;
			if (i - 5 >= 0 && s[i - 5] == '#')
				link++;
			if (i + 5 <= 21 && s[i + 5] == '#')
				link++;
		}
		i++;
	}
		if (i != 20 || (link < 6 || link > 8))
			return (0);
	return (1);
}

static int		ft_check_piece(char *s)
{
	int		i;
	int		j;
	int		n;
	int		m;

	m = 0;
	n = 0;
	i = -1;
	j = 0;
	while (s[++i])
	{
		if (s[i] != '#' && s[i] != '.' && s[i] != '\n')
			return(0);
		if (s[i] == '#')
			n++;
		if (s[i] == '.')
			m++;
		if (s[i] == '\n' && i < 20)
			j++;
	}
	if (n != 4 || m != 12 || j != 4)
		return(0);
	return (1);
}

char	***ft_parse(char ***tab, char *av)
{
	int		i;
	int		fd;
	char	buf[22];
	int		ret;

	i = 0;
	fd = open(av, O_RDONLY);
	tab = (char ***)malloc(sizeof(char **) * 26);
	while ((ret = (read(fd, buf, 21))))
	{
		buf[ret] = '\0';
		if (!ft_link(buf) || !ft_check_piece(buf))
		{
			ft_putstr("Error");
			break ;
		}
		tab[i] = ft_strsplit(buf, '\n');
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

t_coord	*ft_coord(char ***tab, t_coord *tetri)
{
	int		i;
	int		j;
	int		k;
	int		hash;
	int		lettre;

	lettre = 'A';
	i = 0;
	while (tab[i])
	{
		hash = 0;
		j = 0;
		while (tab[i][j])
		{
			k = 0;
			while (tab[i][j][k])
			{
				if (tab[i][j][k] == '#')
				{
					tetri[i].x[hash] = j;
					tetri[i].y[hash] = k;
					hash++;
				}
				k++;
			}
			j++;
		}
		tetri[i].letter = lettre++;
		i++;
	}
	return (tetri);
}
