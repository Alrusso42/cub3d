/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_pixel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:18:04 by alrusso           #+#    #+#             */
/*   Updated: 2022/11/23 09:18:12 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

void	img_pix_put(t_game *game, int x, int y, int color)
{
	char	*pixel;
	int		i;

	i = game->img.bpp - 8;
	pixel = game->img.addr + (y * game->img.line_len + x * \
		(game->img.bpp / 8));
	while (i >= 0)
	{
		if (game->img.endian != 0)
			*pixel++ = (color >> i) & 0xFF;
		else
			*pixel++ = (color >> (game->img.bpp - 8 - i)) & 0xFF;
				i -= 8;
	}
}
