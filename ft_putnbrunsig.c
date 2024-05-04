/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrunsig.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <cda-fons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:01:12 by cda-fons          #+#    #+#             */
/*   Updated: 2024/05/04 18:04:31 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

static void	print(unsigned int nbr)
{
	if(nbr > 9)
		ft_putnbrunsig(nbr / 10);
	if (nbr < 10)
	{
		ft_putnbr_fd(nbr, 1);
		return ;
	}
	ft_putnbr_fd((nbr % 10) + 48, 1);
}

int	ft_putnbrunsig(unsigned int nbr)
{
 	unsigned int	i;
	
	print(nbr);
	i = 1;
	while (nbr > 9)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

int	main()
{
	printf("%d\n", ft_putnbrunsig(570));
}