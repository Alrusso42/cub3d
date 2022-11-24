/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:03:53 by alrusso           #+#    #+#             */
/*   Updated: 2022/11/23 09:03:58 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	count_char(char *str, char c)
{
	int	x;
	int	count;

	x = 0;
	count = 0;
	while (str[x] != '\0' && ft_isprint(str[x]) != 0)
	{
		if (str[x] == c)
			count++;
		x++;
	}
	return (count);
}
