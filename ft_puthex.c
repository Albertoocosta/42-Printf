/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <cda-fons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:02:35 by cda-fons          #+#    #+#             */
/*   Updated: 2024/05/07 17:52:29 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthex(int arg, char flag);

static void	printhex(int arg, char flag)
{
	char	*base;

	if (flag == 'x')
		base = "0123456789abcdef";
	else if(flag == 'X')
		base = "0123456789ABCDEF";
	if (arg > 16)
	{
		ft_puthex(arg / 16, flag);
		ft_puthex(arg % 16, flag);
	}
	if (arg <= 16)
		ft_putchr(base[arg]);
}

int	ft_puthex(int arg, char flag)
{
	unsigned int	i;
	
	printhex(arg, flag);
	i = 0;
	while (arg != 0)
	{
		arg = arg / 16;
		i++;
	}
	return (i);
}
