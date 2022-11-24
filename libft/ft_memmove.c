/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechard <nbechard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:31:28 by nbechard          #+#    #+#             */
/*   Updated: 2022/11/23 09:31:28 by nbechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned long int n)
{
	unsigned long int	i;

	if (dest == NULL && src == NULL)
		return (dest);
	i = 0;
	if (dest > src && n != 0)
	{
		n--;
		while (n > 0)
		{
			*(char *)(dest + n) = *(char *)(src + n);
			n--;
		}
			*(char *)(dest + n) = *(char *)(src + n);
	}
	else
	{
		while (i < n)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dest);
}
