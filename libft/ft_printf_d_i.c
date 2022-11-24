/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechard <nbechard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:34:49 by nbechard          #+#    #+#             */
/*   Updated: 2022/11/23 09:34:49 by nbechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printf_d_i(va_list ap, int *i)
{
	char	*tab;

	tab = ft_itoa(va_arg(ap, int));
	ft_putstr_fd(tab, 1);
	*i = *i + ft_strlen(tab);
	free(tab);
}
