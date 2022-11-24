/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechard <nbechard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:34:45 by nbechard          #+#    #+#             */
/*   Updated: 2022/11/23 09:34:45 by nbechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_process(char c, char d, int *i)
{
	if (c != '%')
	{	
		ft_putchar_fd(c, 1);
		*i = *i + 1;
		return (1);
	}
	if (c == '%' && d == '%')
	{	
		ft_putchar_fd(c, 1);
		*i = *i + 1;
		return (2);
	}
	if (c == '%' && (d != 'c' && d != 's' && d != 'i' && d != 'd'
			&& d != 'u' && d != 'x' && d != 'X'
			&& d != 'p' && d != '\0'))
	{	
		ft_putchar_fd(c, 1);
		*i = *i + 1;
		return (-1);
	}
	if (c == '%' && d == '\0')
		return (-1);
	return (0);
}

static void	ft_conversion(char c, va_list ap, int *i)
{
	if (c == 'c')
		ft_printf_c(ap, i);
	else if (c == 's')
		ft_printf_s(ap, i);
	else if (c == 'i' || c == 'd')
		ft_printf_d_i(ap, i);
	else if (c == 'u')
		ft_printf_u(ap, i);
	else if (c == 'x' || c == 'X')
		ft_printf_x(ap, i, c);
	else if (c == 'p')
		ft_printf_p(ap, i);
}

int	ft_printf(const char *tab, ...)
{
	va_list	ap;
	int		test;
	int		size;
	int		i;

	va_start(ap, tab);
	size = 0;
	i = 0;
	while (tab[size])
	{
		test = ft_process(tab[size], tab[size + 1], &i);
		if (test == -1)
			return (-1);
		if (test == 0)
		{
			size++;
			ft_conversion(tab[size], ap, &i);
			size++;
		}
		size = size + test;
	}
	va_end(ap);
	return (i);
}
