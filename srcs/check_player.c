/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_player.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:02:25 by alrusso           #+#    #+#             */
/*   Updated: 2022/11/23 09:02:30 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

void	check_nb_player(t_game *game)
{
	int	i;

	i = 0;
	while (i < game->map.lines)
	{
		game->map.nb_player += count_char(game->map.tab[i], 'N');
		game->map.nb_player += count_char(game->map.tab[i], 'E');
		game->map.nb_player += count_char(game->map.tab[i], 'S');
		game->map.nb_player += count_char(game->map.tab[i], 'W');
		if (game->map.nb_player == 1)
			init_player_position(game, game->map.tab[i], i);
		i++;
	}
	if (game->map.nb_player != 1)
		error_msg("Error:\n, aucun ou plus de 1 joueur!");
}
