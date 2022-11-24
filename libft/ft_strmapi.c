/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:36:45 by alrusso           #+#    #+#             */
/*   Updated: 2022/11/23 09:36:53 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*tab;
	unsigned long int	len;
	unsigned long int	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen((char *)s);
	tab = (char *)malloc(sizeof(char) * (len + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		tab[i] = f(i, s[i]);
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
