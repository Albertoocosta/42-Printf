/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:21:11 by cda-fons          #+#    #+#             */
/*   Updated: 2024/04/19 15:53:12 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i = 1;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;

	i = len(n);
	result = (char *)malloc(sizeof(char) * (i + 1));
	if (!result)
		return (0);
	if (n == 0)
		result[0] = '0';
	result[i] = '\0';
	if (n < 0)
		result[0] = '-';
	while (n)
	{
		if (result[0] == '-')
			result[i - 1] = -(n % 10) + 48;
		else
			result[i - 1] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	return (result);
}
