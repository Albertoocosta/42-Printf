/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrunsig.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <cda-fons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:01:12 by cda-fons          #+#    #+#             */
/*   Updated: 2024/05/05 15:59:25 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	print(unsigned long nbr)
{
	if(nbr > 9)
		ft_putnbrunsig(nbr / 10);
	if (nbr < 10)
	{
		ft_putchar_fd((int)(nbr + '0'), 1);
		return ;
	}
	ft_putchar_fd((int)(nbr % 10) + '0', 1);
}

int	ft_putnbrunsig(unsigned long nbr)
{
 	unsigned int	i;
	
	print(nbr);
	i = 1;
	while (nbr > 9)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}
