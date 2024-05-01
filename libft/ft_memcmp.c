/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 19:38:39 by cda-fons          #+#    #+#             */
/*   Updated: 2024/04/16 17:14:28 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ps1;
	const unsigned char	*ps2;
	size_t				i;
	int					result;

	i = 0;
	result = 0;
	ps1 = (const unsigned char *)s1;
	ps2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (ps1[i] != ps2[i])
		{
			result = ps1[i] - ps2[i];
			if (result > 1)
				return (1);
			else if (result < 1)
				return (-1);
		}
		i++;
	}
	return (0);
}
