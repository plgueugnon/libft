/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlstclear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:49:59 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 17:50:01 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	dlstclear(t_dlist **lst, void (*del)(void **))
{
	t_dlist	*tmp;

	tmp = NULL;
	if (*lst)
	{
		while (*lst)
		{
			tmp = *lst;
			*lst = (*lst)->next;
			del(&tmp->content);
			free(tmp);
		}
	}
	*lst = NULL;
}
