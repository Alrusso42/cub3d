/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_minimap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:04:59 by alrusso           #+#    #+#             */
/*   Updated: 2022/11/23 09:05:05 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

void	draw_square(t_game *game, int posx, int posy, int color)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	if (game->win_ptr == NULL)
		return ;
	while (++i < 10)
	{
		while (++j < 10)
			img_pix_put(game, posy + i, posx + j, color);
		j = -1;
	}
}
