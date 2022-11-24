/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechard <nbechard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:30:34 by nbechard          #+#    #+#             */
/*   Updated: 2022/11/23 09:30:34 by nbechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned long int n)
{
	char	*str;
	char	*str_end;

	str = (char *)s;
	str_end = str + n;
	while (str < str_end)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (NULL);
}
