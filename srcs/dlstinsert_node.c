/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlstinsert_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:51:00 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 17:51:02 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	dlstinsert_node(t_dlist **alst, t_dlist *pos, t_dlist *new)
{
	t_dlist	*iter;

	if (!*alst)
	{
		*alst = new;
		return ;
	}
	iter = *alst;
	if (pos)
	{
		while (iter != pos)
			iter = iter->next;
		if (!pos->next)
		{
			dlstadd_back(alst, new);
			return ;
		}
		new->next = iter->next;
		iter->next->prev = new;
		iter->next = new;
		new->prev = iter;
	}
}
