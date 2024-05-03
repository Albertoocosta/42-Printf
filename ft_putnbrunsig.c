/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrunsig.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <cda-fons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:01:12 by cda-fons          #+#    #+#             */
/*   Updated: 2024/05/03 20:21:42 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbrunsig(unsigned int nbr)
{
	int	i;
	
	i = 0;
	if (nbr < 0)
		return (0);
	if (nbr < 10)
	{
		i = nbr + '0';
		ft_putchr(i);
	}
	if (nbr >= 10)
	{
		ft_putnbrunsig(nbr / 10);
		ft_putnbrunsig(nbr % 10);
	}
	return (1);
}
