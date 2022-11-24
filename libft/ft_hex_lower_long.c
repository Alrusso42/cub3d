/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_lower_long.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechard <nbechard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:05:34 by nbechard          #+#    #+#             */
/*   Updated: 2022/11/23 09:05:34 by nbechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_tab_hex(unsigned long int nb, char *tab_hex)
{
	unsigned int	i;

	i = 1;
	while (nb > 15)
	{
		nb = nb / 16;
		i++;
	}
	tab_hex = (char *)malloc(sizeof(char) * (i + 1));
	if (tab_hex == NULL)
		return (NULL);
	tab_hex[i] = '\0';
	if (nb == 0)
		tab_hex[0] = '0';
	return (tab_hex);
}

char	*ft_hex_lower_long(unsigned long int nb, char *tab_hex)
{	
	char				c;
	unsigned long int	mod;
	unsigned int		i;

	i = 0;
	tab_hex = ft_tab_hex(nb, tab_hex);
	while (nb)
	{
		mod = nb % 16;
		if (mod < 10)
			c = mod + '0';
		else
			c = (mod - 10) + 'a';
		tab_hex[i] = c;
		nb = nb / 16;
		i++;
	}
	ft_rev_char_tab(tab_hex);
	return (tab_hex);
}
