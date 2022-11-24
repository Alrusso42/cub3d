/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:38:30 by alrusso           #+#    #+#             */
/*   Updated: 2022/11/23 09:38:36 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	char	*src;

	src = (char *)s;
	ptr = malloc(sizeof(char) * ((ft_strlen(src)) + 1));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, src, (ft_strlen(src) + 1));
	return (ptr);
}
