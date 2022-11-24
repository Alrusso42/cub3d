/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechard <nbechard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:05:14 by nbechard          #+#    #+#             */
/*   Updated: 2022/11/23 09:05:14 by nbechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned long int nb, unsigned long int size)
{
	void	*p;

	p = NULL;
	p = malloc(size * nb);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, nb * size);
	return (p);
}
