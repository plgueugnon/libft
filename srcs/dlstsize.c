/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlstsize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:51:29 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 17:51:31 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	dlstsize(t_dlist *lst)
{
	int		l;
	t_dlist	*iter;

	iter = lst;
	l = 0;
	while (iter)
	{
		l++;
		iter = iter->next;
	}
	return (l);
}
