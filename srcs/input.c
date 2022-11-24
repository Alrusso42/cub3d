/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:08:20 by alrusso           #+#    #+#             */
/*   Updated: 2022/11/23 09:08:33 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	ft_input_2(t_image *images)
{
	ft_input(TOUCH_W, images);
	return (0);
}

int	ft_input(int key, t_image *images)
{
	t_game	*game;

	game = &images->game;
	update(images, key);
	anim_direction(&images->legend, key);
	if (game->win_ptr == NULL)
		return (1);
	anim_cub3d(images);
	reprint_pos(game);
	return (0);
}
