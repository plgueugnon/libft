/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlstfind_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:50:50 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 17:50:52 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*dlstfind_node(t_dlist *list, void *content)
{
	t_dlist	*tmp;

	tmp = list;
	while (tmp)
	{
		if (!ft_memcmp(tmp->content, content, ft_strlen((char *)content)))
			return (tmp);
		tmp = tmp->next;
	}
	return (0);
}
