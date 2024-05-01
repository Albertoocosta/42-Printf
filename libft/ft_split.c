/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <cda-fons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:45:13 by cda-fons          #+#    #+#             */
/*   Updated: 2024/04/30 19:22:53 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	i_words(char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			words++;
			while (str[i] && str[i] != c)
			{
				i++;
			}
		}
	}
	return (words);
}

static void	memfree(char **list, int count)
{
	while (count >= 0)
	{
		free(list[count]);
		count--;
	}
	free(list);
}

char	**fill(char *str, char c, char **list, size_t size)
{
	size_t	i;
	int		x;
	int		y;

	x = 0;
	y = 0;
	i = -1;
	while (++i < size)
	{
		while (str[x] == c)
			x++;
		y = x;
		while (str[y] != c && str[y])
			y++;
		list[i] = malloc(sizeof(char) * ((y - x) + 1));
		if (!list[i])
		{
			memfree(list, i);
			return (0);
		}
		ft_strlcpy(list[i], &str[x], ((y - x) + 1));
		x = y;
	}
	list[size] = 0;
	return (list);
}

char	**ft_split(char	*str, char c)
{
	char	**list;
	size_t	size;

	size = i_words(str, c);
	list = (char **)malloc(sizeof(char *) * (size + 1));
	if (!list)
		return (0);
	list = fill(str, c, list, size);
	return (list);
}
