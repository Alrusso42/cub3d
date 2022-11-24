/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_caracter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:01:30 by alrusso           #+#    #+#             */
/*   Updated: 2022/11/23 09:01:32 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	check_map_char(t_game *game)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (game->map.tab[++i])
	{
		while (game->map.tab[i][++j])
		{
			if (find_char(game->map.tab[i][j], " \t01NSEW") == 0)
				return (0);
		}
		j = -1;
	}
	return (1);
}
