/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   direction.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 08:58:20 by alrusso           #+#    #+#             */
/*   Updated: 2022/11/23 08:58:33 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

void	anim_direction(t_game *legend, int key)
{
	(void) key;
	mlx_destroy_image(legend->mlx_ptr, legend->img.mlx_img);
	legend->img.mlx_img = mlx_new_image(legend->mlx_ptr, 162, 159);
	mlx_put_image_to_window(legend->mlx_ptr, legend->win_ptr, \
		legend->img.mlx_img, CUBE_X + 64, 403);
	mlx_do_sync(legend->mlx_ptr);
}
