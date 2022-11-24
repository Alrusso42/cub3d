/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:35:41 by alrusso           #+#    #+#             */
/*   Updated: 2022/11/23 09:35:48 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_start(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (set[j])
	{
		while (set[j] == s1[i] && s1[i])
		{
			i++;
			j = 0;
		}
		j++;
	}
	return (i);
}

static size_t	ft_end(size_t l1, const char *s1, const char *set)
{
	size_t	j;

	j = 0;
	while (set[j])
	{
		while (set[j] == s1[l1])
		{
			l1--;
			j = 0;
		}
		j++;
	}
	return (l1 + 1);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	unsigned long int	l_s1;
	unsigned long int	start;
	size_t				i;
	char				*tab;

	if (!s1 || !set)
		return (NULL);
	l_s1 = ft_strlen((char *)s1);
	start = ft_start(s1, set);
	if (start == l_s1)
		return (tab = ft_calloc(1, 1));
	i = ft_end(l_s1 - 1, s1, set);
	tab = ((char *)malloc(sizeof(char) * (i - start + 1)));
	if (!tab)
		return (NULL);
	ft_memcpy(tab, (s1 + start), (i - start));
	tab[i - start] = '\0';
	return (tab);
}
