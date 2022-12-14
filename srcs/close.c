/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:07:11 by alrusso           #+#    #+#             */
/*   Updated: 2022/11/23 09:49:09 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	ft_close(t_image *image)
{
	t_game	*game;
	int		i;

	game = &image->game;
	mlx_destroy_image(game->mlx_ptr, game->img.mlx_img);
	mlx_destroy_image(image->legend.mlx_ptr, image->legend.img.mlx_img);
	mlx_destroy_image(image->cube.mlx_ptr, image->cube.img.mlx_img);
	mlx_destroy_window(game->mlx_ptr, game->win_ptr);
	free(game->mlx_ptr);
	i = -1;
	while (image->game.map.tab[++i])
		free(image->game.map.tab[i]);
	free(image->game.map.tab);
	i = -1;
	while (++i < 4)
		free(image->cube.name_text[i]);
	exit (0);
}
