/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_char_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechard <nbechard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:38:58 by nbechard          #+#    #+#             */
/*   Updated: 2022/11/23 09:38:58 by nbechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_rev_char_tab(char *tab)
{
	unsigned int	i;
	long int		len;
	char			c;

	i = 0;
	len = ft_strlen(tab);
	while (i < len / 2)
	{
		c = tab[i];
		tab[i] = tab[(len - 1) - i];
		tab[(len - 1) - i] = c;
		i++;
	}
}
