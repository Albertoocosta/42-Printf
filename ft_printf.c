/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <cda-fons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:40:54 by cda-fons          #+#    #+#             */
/*   Updated: 2024/05/07 15:55:41 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int   checkArgs(const char *content, va_list args)
{
   int   i;

   i = 0;
   while (*content)
   {
      if (*content == 's')
         i += ft_putstri(va_arg(args, char *));
      else if (*content == 'c')
         i += ft_putchr(va_arg(args, int));
      else if (*content == 'd' || *content == 'i')
         i += ft_putnb(va_arg(args, int));
      else if (*content == 'u')
         i += ft_putnbrunsig(va_arg(args, unsigned int));
      else if (*content == 'X')
         i += ft_puthex((va_arg(args, int)), 'X');
      else if (*content == 'x')
         i += ft_puthex((va_arg(args, int)), 'x');
      else if (*content == 'p')
         i += ft_putptr(va_arg(args, int));
      content++;
   }
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
   while(content[i] != 0)
   {
      if(content[i] == '%')
      {
         if (content[i + 1] == '%')
            result = ft_putchr('%');
         else if (ft_strchr("scdiupxX", content[i + 1]))
         {
            result = checkArgs(&content[i], args);
         }
      }
      i++;
   }
   va_end(args);
   return (result);
}
int main()
{
   char *str = "teste string";
   ft_printf("%s", str);
   printf ("\n");
   printf("%s", str);
}