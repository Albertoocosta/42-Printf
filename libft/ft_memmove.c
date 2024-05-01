/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:57:15 by cda-fons          #+#    #+#             */
/*   Updated: 2024/04/22 19:11:25 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t n)
{
	unsigned char	*src;
	unsigned char	*dst;

	if (!to && !from)
		return (0);
	src = (unsigned char *)from;
	dst = (unsigned char *)to;
	if (src < dst && src + n > dst)
	{
		while (n--)
			dst[n] = src[n];
	}
	else
	{
		while (n--)
			*dst++ = *src++;
	}
	return (to);
}
