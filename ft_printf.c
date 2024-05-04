/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <cda-fons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:40:54 by cda-fons          #+#    #+#             */
/*   Updated: 2024/05/04 13:28:46 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int   checkArgs(const char *content, void *arg)
{
   int   i;

   i = 0;
   while (*content)
   {
      if (*content == 's')
         i += ft_putstri((char *)arg);
      else if (*content == 'c')
         i += ft_putchr((int)arg);
      else if (*content == 'd' || content[i + 1] == 'i')
         i += ft_putnb((int)arg);
      else if (*content == 'X')
         i += ft_putnb((int)arg);
      else if (*content == 'x')
         i += ft_putnb((int)arg); 
      return (i);
   }
}

int	ft_printf(const char *content, ...)
{
	int   i;
   int   result;
   va_list  args;
   
   i = 0;
   result = 0;
   va_start(args, content);
   while(content[i])
   {
      if(content[i] == '%')
      {
         if (content[i + 1] == '%')
            result = ft_putchr('%');
         else if (ft_strchr("scdiupxX", content[i + 1]))
            result = checkArgs(content, va_args(args, void *));
      }
      i++;
   }
   va_end(args);
   return (result);
}

int main()
{
   ft_printf("Teste aqui %s\n");
}