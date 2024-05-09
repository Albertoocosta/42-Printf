/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <cda-fons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:11:54 by cda-fons          #+#    #+#             */
/*   Updated: 2024/05/09 16:09:29 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnb(long nbr)
{
	long	nb;
	int		i;

	i = 1;
	nb = nbr;
	if (nbr < 0 && nbr != -2147483648)
	{
		nb = -nbr;
		i++;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	ft_putnbr_fd((int)nbr, 1);
	if (nbr == -2147483648)
		return (11);
	return (i);
}
