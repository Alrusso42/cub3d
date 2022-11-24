/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechard <nbechard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:31:12 by nbechard          #+#    #+#             */
/*   Updated: 2022/11/23 09:31:12 by nbechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, unsigned long int n)
{
	unsigned long int	i;
	char				*first;
	char				*secound;

	if (dest == NULL && src == NULL)
		return (dest);
	first = (char *)dest;
	secound = (char *)src;
	i = 0;
	while (i < n)
	{
		first[i] = secound[i];
		i++;
	}
	return (dest);
}
