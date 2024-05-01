/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:05:36 by cda-fons          #+#    #+#             */
/*   Updated: 2024/04/19 16:22:17 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*check;
	size_t	i;

	check = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!s || !check)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		check[i] = (*f)(i, s[i]);
		i++;
	}
	check[i] = '\0';
	return (check);
}
