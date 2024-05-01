/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:41:28 by cda-fons          #+#    #+#             */
/*   Updated: 2024/04/23 20:07:40 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	h;
	size_t	i;
	size_t	start;

	h = ft_strlen(dst);
	if (size == 0 || size <= h)
		return (ft_strlen(src) + size);
	i = 0;
	start = ft_strlen(dst);
	while (src[i] && i < (size - start - 1))
	{
		dst[h] = src[i];
		i++;
		h++;
	}
	dst[h] = '\0';
	return (start + ft_strlen(src));
}
