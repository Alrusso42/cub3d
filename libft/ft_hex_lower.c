/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_lower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechard <nbechard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:05:48 by nbechard          #+#    #+#             */
/*   Updated: 2022/11/23 09:05:48 by nbechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_tab_hex(unsigned int nb)
{
	unsigned int	i;
	char			*tab_hex;

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

char	*ft_hex_lower(unsigned int nb)
{
	char			c;
	unsigned int	mod;
	unsigned int	i;
	char			*tab_hex;

	i = 0;
	tab_hex = ft_tab_hex(nb);
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
	if (tab_hex[1] != '\0')
		ft_rev_char_tab(tab_hex);
	return (tab_hex);
}
