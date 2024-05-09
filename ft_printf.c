/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <cda-fons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:40:54 by cda-fons          #+#    #+#             */
/*   Updated: 2024/05/09 12:57:06 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int   checkArgs(const char *content, va_list args)
{
   int   i;

   i = 0;   
   if (*content == 's')
      i += ft_putstri(va_arg(args, char *));
   else if (*content == 'c')
      i += ft_putchr(va_arg(args, int));
   else if (*content == 'd' || *content == 'i')
      i += ft_putnb(va_arg(args, int));
   else if (*content == 'u')
      i += ft_putnbrunsig(va_arg(args, unsigned int));
   else if (*content == 'X')
      i += ft_puthex((va_arg(args, unsigned int)), 'X');
   else if (*content == 'x')
      i += ft_puthex((va_arg(args, unsigned int)), 'x');
   else if (*content == 'p')
      i += ft_putptr(va_arg(args, void *));
   else if (*content == '%')
      i += ft_putchr('%');
   content++;

   return (i);
}

int	ft_printf(const char *content, ...)
{
   va_list  args;
	int   i;
   int   result;
   
   i = 0;
   result = 0;
   va_start(args, content);
   while (content[i] != 0)
   {
      if (content[i] == '%')
      {
         result += checkArgs(&content[i + 1], args);
         i++;
      }
      else
         result += ft_putchr(content[i]);
      i++;
   }
   va_end(args);
   return (result);
}
