/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:10:09 by nbechard          #+#    #+#             */
/*   Updated: 2022/11/23 09:45:05 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	nb;
	int					sign;
	size_t				i;

	nb = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		nb = 10 * nb + str[i] - '0';
		i++;
	}
	if (nb > 9223372036854775807 && sign == -1)
		return (0);
	if (nb >= 9223372036854775807 && sign == 1)
		return (-1);
	return (nb * sign);
}
