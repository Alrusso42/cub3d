/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbechard <nbechard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:28:18 by nbechard          #+#    #+#             */
/*   Updated: 2022/11/23 09:28:18 by nbechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*pt;

	pt = (t_list *)malloc(sizeof(t_list));
	if (pt == NULL)
		return (NULL);
	pt->content = content;
	pt->next = NULL;
	return (pt);
}
