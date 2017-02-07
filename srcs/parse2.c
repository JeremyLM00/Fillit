/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kberon <kberon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 17:00:01 by kberon            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2017/02/01 04:03:54 by kberon           ###   ########.fr       */
=======
/*   Updated: 2017/01/27 14:37:13 by jechoisn         ###   ########.fr       */
>>>>>>> f34f922819583b60b1dcbb424b91343c7278b9c5
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	***tab_up_once(char ***tab)
{
	int		i;
	int		j;

	i = 0;
	while (tab[i])
	{
		j = 0;
<<<<<<< HEAD
		while(tab[i][j])
=======
		while (tab[i][j])
>>>>>>> f34f922819583b60b1dcbb424b91343c7278b9c5
		{
			if(tab[i][j][0] == '.' && tab[i][j][1] == '.'
					&& tab[i][j][2] == '.' && tab[i][j][3] == '.' && j < 3)
			{
				tab[i][j] = ft_strcpy(tab[i][j], tab[i][j + 1]);
				tab[i][j + 1][0] = '.';
				tab[i][j + 1][1] = '.';
				tab[i][j + 1][2] = '.';
				tab[i][j + 1][3] = '.';
			}
			j++;
		}
		if (tab[i][0][0] == '.' && tab[i][0][1] == '.'
				&& tab[i][0][2] == '.' && tab[i][0][3] == '.')
			tab_up_once(tab);
		i++;
	}
	return (tab);
}

<<<<<<< HEAD
static char		***ft_to_the_left(char ***tab, int i, int k)
{
	tab[i][0][k] = tab[i][0][k + 1];
	tab[i][1][k] = tab[i][1][k + 1];
	tab[i][2][k] = tab[i][2][k + 1];
	tab[i][3][k] = tab[i][3][k + 1];
	tab[i][0][k + 1] = '.';
	tab[i][1][k + 1] = '.';
	tab[i][2][k + 1] = '.';
	tab[i][3][k + 1] = '.';
	return (tab);
}

char	***tab_left_once(char ***tab)
{
	int		i;
	int		k;

	i = -1;
	while(tab[++i])
	{
		k = 0;
		while(tab[i][0][k])
		{
			if(tab[i][0][k] == '.' && tab[i][1][k] == '.'
					&& tab[i][2][k] == '.' && tab[i][3][k] == '.'
					&& k < 3)
				ft_to_the_left(tab, i, k);
			k++;
		}
		if (tab[i][0][0] == '.' && tab[i][1][0] == '.'
				&& tab[i][2][0] == '.' && tab[i][3][0] == '.')
			tab_left_once(tab);
	}
	return (tab);
=======
char	***tab_up_once(char ***tab)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	while(tab[i])
	{
		j = 0;
		while(tab[i][j])
		{
			if(tab[i][0][0] == '.' && tab[i][1][0] == '.' && tab[i][2][0] == '.'
				&& tab[i][3][0] == '.' && j < 3)
			{
			}
		}
	}
>>>>>>> f34f922819583b60b1dcbb424b91343c7278b9c5
}
