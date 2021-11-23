/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlstend.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:50:35 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 17:50:36 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*dlst_end(t_dlist *list)
{
	t_dlist	*iter;

	iter = list;
	while (iter->next)
	{
		iter = iter->next;
	}
	return (iter);
}
