/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:15:55 by alrusso           #+#    #+#             */
/*   Updated: 2022/11/23 10:15:57 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, unsigned long int len)
{
	unsigned long int	i;
	unsigned long int	j;

	if (*(char *)s2 == '\0')
		return ((char *)s1);
	i = 0;
	while (*(char *)(s1 + i) && i < len)
	{
		j = 0;
		while (*(char *)(s2 + j) == *(char *)(s1 + i + j) && (i + j) < len)
		{
			if (*(char *)(s2 + j + 1) == '\0')
				return ((char *)(s1 + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
