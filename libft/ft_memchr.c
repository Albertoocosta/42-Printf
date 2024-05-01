/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <cda-fons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:12:14 by cda-fons          #+#    #+#             */
/*   Updated: 2024/04/27 17:09:29 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*pts;
	size_t		i;

	i = 0;
	pts = (const char *)s;
	while (i < n)
	{
		if (pts[i] == (char)c)
			return ((void *)&pts[i]);
		i++;
	}
	return (NULL);
}
