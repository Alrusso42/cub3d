/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:38:42 by alrusso           #+#    #+#             */
/*   Updated: 2022/11/23 09:38:48 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != c && *s != '\0')
		s++;
	if (*s == c)
		return ((char *)s);
	return (NULL);
}
