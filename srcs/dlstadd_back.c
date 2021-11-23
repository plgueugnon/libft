/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlstadd_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:48:38 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 17:48:41 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	dlstadd_back(t_dlist **alst, t_dlist *new)
{
	t_dlist	*iter;

	if (!*alst)
	{
		*alst = new;
		return ;
	}
	iter = *alst;
	while (iter->next)
		iter = iter->next;
	iter->next = new;
	new->prev = iter;
}
