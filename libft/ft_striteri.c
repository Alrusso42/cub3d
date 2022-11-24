/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:38:20 by alrusso           #+#    #+#             */
/*   Updated: 2022/11/23 09:38:22 by alrusso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char const *s, void (*f)(unsigned int, char *))
{
	unsigned long int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, (char *)&s[i]);
		i++;
	}
}
