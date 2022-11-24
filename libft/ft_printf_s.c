/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechard <nbechard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:34:58 by nbechard          #+#    #+#             */
/*   Updated: 2022/11/23 09:34:58 by nbechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printf_s(va_list ap, int *i)
{
	char	*tab;

	tab = va_arg(ap, char *);
	if (!tab)
	{
		*i = *i + 6;
		write(1, "(null)", 6);
		return ;
	}
	ft_putstr_fd(tab, 1);
	*i = *i + ft_strlen(tab);
}
