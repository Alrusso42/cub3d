/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dot_cub.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:01:54 by alrusso           #+#    #+#             */
/*   Updated: 2022/11/23 09:02:04 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

void	check_files_map(t_game *game, int argc, char **argv)
{
	int	len_filename;

	if (argc != 2)
		error_msg("Error:\nimpossible d'ouvrir le fichier !");
	len_filename = ft_strlen(argv[1]);
	if (!ft_strnstr(&argv[1][len_filename - 4], ".cub", 4))
		error_msg("Error:\nle fichier ne contient pas l'extention .cub");
	game->read_str = ft_strjoin("maps/", argv[1]);
	game->parse.flag_n = 0;
	game->parse.flag_s = 0;
	game->parse.flag_e = 0;
	game->parse.flag_w = 0;
	game->parse.flag_c = 0;
	game->parse.flag_f = 0;
	game->parse.read_map = 0;
	game->map.lines = 0;
}
