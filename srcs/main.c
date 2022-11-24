/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:11:27 by alrusso           #+#    #+#             */
/*   Updated: 2022/11/23 09:11:28 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	main(int argc, char **argv)
{
	t_image	images;

	srand(time(0));
	check_files_map(&images.game, argc, argv);
	parse_data_and_map(&images.game, &images.cube);
	parse_data_and_map2(&images.game);
	check_parameters_map(&images.game);
	init_var_player(&images.game);
	check_nb_player(&images.game);
	init_game(&images.game);
	print_map(&images.game);
	init_legend(&images.game, &images.legend);
	init_cube(&images.game, &images.cube);
	ft_init_text(&images.cube);
	mlx_hook(images.game.win_ptr, 2, 1L << 0, *ft_input, &images);
	mlx_hook(images.game.win_ptr, 17, 1L << 17, ft_close, &images);
	mlx_hook(images.game.win_ptr, 6, 1, *move_test, &images);
	mlx_mouse_hook(images.game.win_ptr, *movements_mouse, &images);
	mlx_loop(images.game.mlx_ptr);
}
