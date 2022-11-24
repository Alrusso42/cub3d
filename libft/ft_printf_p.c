/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechard <nbechard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:34:55 by nbechard          #+#    #+#             */
/*   Updated: 2022/11/23 09:34:55 by nbechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printf_p(va_list ap, int *i)
{
	unsigned long int	pt;
	char				*tab_hex;

	tab_hex = NULL;
	pt = (unsigned long int)va_arg(ap, void *);
	if (pt == 0)
	{
		*i = *i + 3;
		write(1, "0x0", 3);
		return ;
	}
	tab_hex = ft_hex_lower_long(pt, tab_hex);
	write(1, "0x", 2);
	ft_putstr_fd(tab_hex, 1);
	*i = *i + ft_strlen(tab_hex) + 2;
	free(tab_hex);
}
