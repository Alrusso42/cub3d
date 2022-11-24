/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:33:21 by alrusso           #+#    #+#             */
/*   Updated: 2022/11/23 09:33:28 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	get_load(t_list_get *g, char *tab)
{
	while (get_strchr(g->tabs, '\n') == 0)
	{
		g->len = read(g->fd, tab, 1);
		if (g->len < 0)
			return ;
		tab[g->len] = '\0';
		if (g->len == 0)
			return ;
		g->temp = g->tabs;
		g->tabs = get_strjoin(g->temp, tab);
		free(g->temp);
		if (tab[0] == '\n')
			return ;
	}
}

char	*get_next_line(int fd)
{
	static char	tab[2];
	t_list_get	main;

	tab[0] = '\0';
	if (fd < 0)
		return (NULL);
	main.fd = fd;
	main.tabs = (char *)malloc(sizeof(char) * 2);
	if (main.tabs == NULL)
		return (NULL);
	main.tabs[0] = '\0';
	get_load(&main, tab);
	if ((main.tabs[0] == '\0' && main.len == 0) || main.len == -1)
	{
		free(main.tabs);
		return (NULL);
	}
	return (main.tabs);
}
