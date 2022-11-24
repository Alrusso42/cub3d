/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechard <nbechard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:35:01 by nbechard          #+#    #+#             */
/*   Updated: 2022/11/23 09:35:01 by nbechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printf_u(va_list ap, int *i)
{
	char	*tab;

	tab = ft_itoa_unsigned(va_arg(ap, unsigned int));
	ft_putstr_fd(tab, 1);
	*i = *i + ft_strlen(tab);
	free(tab);
}
