/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:18:19 by alrusso           #+#    #+#             */
/*   Updated: 2022/11/23 09:18:26 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	index_last_line(t_game *game)
{
	int	i;
	int	size;

	i = 0;
	while (game->map.tab[i])
		i++;
	size = i;
	return (size);
}
