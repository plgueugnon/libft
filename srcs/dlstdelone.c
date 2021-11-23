/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlstdelone.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:50:18 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 17:50:28 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	dlstdelone(t_dlist **lst, void (*del)(void **))
{
	t_dlist	*tmp;

	if (*lst)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		(*lst)->prev = tmp->prev;
		tmp->prev->next = *lst;
		del(&tmp->content);
		free(tmp);
	}
}
