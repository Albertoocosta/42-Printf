/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <cda-fons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:32:08 by cda-fons          #+#    #+#             */
/*   Updated: 2024/05/08 18:22:23 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstri(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		i += ft_putstri("(null)");
	else
	{
		while (str[i])
		{
			ft_putchr(str[i]);
			i++;
		}
	}
	return (i);
}
