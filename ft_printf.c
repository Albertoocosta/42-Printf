/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-fons <cda-fons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:40:54 by cda-fons          #+#    #+#             */
/*   Updated: 2024/05/02 16:29:15 by cda-fons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int   checkArgs(const char *content, va_list args)
{
   int   i;

   i = 0;
   while (content[i])
   {
      if (content[i] == '%')
      {
         if (content[i + 1] == 's')
            return (ft_putstr_fd(va_arg(args, char *), 1));
         if (content[i + 1] == 'c')
            return (ft_putchar_fd(va_arg(args, char), 1));
         if (content[i + 1] == 'd')
            return (ft_putnbr_fd(va_arg(args, int), 1));
         if (content[i + 1] == 'i')
            return (ft_putnbr_fd(va_arg(args, int), 1));
         if (content[i + 1] == '%')
            return (ft_putchar_fd(content[i + 1], 1));
         if (content[i + 1] == 'X')
            return (ft_putnbr_fd(va_arg(args, int), 1));
         if (content[i + 1] == 'x')
            return (ft_putnbr_fd(va_arg(args, int), 1));
      }
      i++;  
   }
   return (0);
}

int	ft_printf(const char *content, ...)
{
	va_list args;
   va_start(args, content);
   checkArgs(content, args);
   va_end(args);
   return (0);
}

int main()
{
   ft_printf("Teste aqui %s\n");
}