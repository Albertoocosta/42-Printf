/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <cda-fons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:40:54 by cda-fons          #+#    #+#             */
/*   Updated: 2024/05/01 16:27:15 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *content, ...)
{
	va_list args;
   int   i;

   i = 0;
   va_start(args, content);
   while (content[i])
   {
      if (content[i] == '%')
      {
         if (content[i + 1] == 's')
         {
            ft_putstr_fd(args, 1);
         }
         if (content[i + 1] == 'c')
         {
            ft_putchar_fd(args, 1);
         }
         if (content[i + 1] == 'd')
         {
            ft_putnbr_fd(args, 1);
         }
         if (content[i + 1] == 'i')
         {
            ft_putnbr_fd(args, 1);
         }
         if (content[i + 1] == '%')
         {
            ft_putchar_fd("%", 1);
         }
         if (content[i + 1] == 'X')
         {
            ft_putnbr_fd(args, 1);
         }
         if (content[i + 1] == 'x')
         {
            ft_putnbr_fd(args, 1);
         }
      }
      i++;
   }
   return (0);
}