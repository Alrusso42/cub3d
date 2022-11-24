/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_parameters.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:03:02 by alrusso           #+#    #+#             */
/*   Updated: 2022/11/23 09:03:08 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	check_parameters_map(t_game *game)
{
	if (check_map_char(game) == 0)
		error_msg("Error:\ncaractère non défini dans la map !");
	if (check_border_map(game) == 0)
		error_msg("Error:\nla map est ouverte sur les bords !");
	if (check_zeros(game) == 0)
		error_msg("Error:\nla map est ouverte à l'interieur !");
	return (0);
}
