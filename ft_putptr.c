/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <cda-fons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:56:31 by cda-fons          #+#    #+#             */
/*   Updated: 2024/05/09 16:08:05 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *arg)
{
	unsigned int	i;

	if (arg == 0)
		return (ft_putstri("(nil)"));
	i = 2;
	ft_putstri("0x");
	i += ft_puthex((unsigned long)arg, 'x');
	return (i);
}
