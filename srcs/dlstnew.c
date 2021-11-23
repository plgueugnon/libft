/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlstnew.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:51:13 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 17:51:14 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*dlstnew(void *content)
{
	t_dlist	*l_init;

	if (!content)
		return (0);
	l_init = malloc(sizeof(t_dlist));
	if (!l_init)
		return (0);
	else
	{
		l_init->content = content;
		l_init->next = NULL;
		l_init->prev = NULL;
	}
	return (l_init);
}
