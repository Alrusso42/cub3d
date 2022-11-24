/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:38:03 by alrusso           #+#    #+#             */
/*   Updated: 2022/11/23 09:38:05 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	size_t	size;

	if (!s1 && !s2)
		return (NULL);
	size = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	tab = NULL;
	tab = (char *)(malloc(sizeof(char) * size));
	if (tab == NULL)
		return (NULL);
	ft_bzero(tab, size);
	size = ft_strlen((char *)s1);
	ft_memcpy(tab, (char *)s1, size);
	ft_memcpy(&tab[size], (char *)s2, ft_strlen((char *)s2));
	return (tab);
}
