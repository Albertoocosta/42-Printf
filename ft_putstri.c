/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <cda-fons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:32:08 by cda-fons          #+#    #+#             */
/*   Updated: 2024/05/05 15:44:21 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstri(char *str)
{
	int	i;

	i = 0;
	if(str)
		while (str[i])
		{
			ft_putchar_fd(str[i], 1);
			i++;
		}
	else
		return (0);
	return (i);
}
