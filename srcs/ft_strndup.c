/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgueugno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:55:16 by pgueugno          #+#    #+#             */
/*   Updated: 2021/11/23 17:55:18 by pgueugno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, int len)
{
	int		i;
	char	*dst;

	i = 0;
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (0);
	while (i < len)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
