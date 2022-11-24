/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechard <nbechard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:15:26 by nbechard          #+#    #+#             */
/*   Updated: 2022/11/23 09:15:26 by nbechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_fill_tab(char *str, int *nbr, int *i)
{
	*i = *i - 1;
	while (*nbr / 10)
	{
		str[*i] = *nbr % 10 + '0';
		*i = *i - 1;
		*nbr /= 10;
	}
	str[*i] = *nbr % 10 + '0';
}

static void	ft_size_tab(int *nbr, int *i)
{
	int	nb2;

	*i = 1;
	if (*nbr < 0)
		*i = 2;
	nb2 = *nbr;
	while (nb2 != 0)
	{
		*i = *i + 1;
		nb2 = nb2 / 10;
	}
}

static char	*ft_mini_tab(void)
{
	char	*tab;

	tab = (char *)malloc(sizeof(char) * 12);
	if (tab == NULL)
		return (NULL);
	tab[0] = '-';
	tab[1] = '2';
	tab[2] = '1';
	tab[3] = '4';
	tab[4] = '7';
	tab[5] = '4';
	tab[6] = '8';
	tab[7] = '3';
	tab[8] = '6';
	tab[9] = '4';
	tab[10] = '8';
	tab[11] = '\0';
	return (tab);
}

static char	*ft_zero(void)
{
	char	*tab;

	tab = (char *)malloc(sizeof(char) * 2);
	if (tab == NULL)
		return (NULL);
	tab[0] = '0';
	tab[1] = '\0';
	return (tab);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	if (n == 0)
		return (ft_zero());
	if (n == -2147483648)
		return (ft_mini_tab());
	ft_size_tab(&n, &i);
	str = (char *)malloc(sizeof(char) * (i));
	if (str == NULL)
		return (NULL);
	i--;
	str[i] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	ft_fill_tab(str, &n, &i);
	return (str);
}
