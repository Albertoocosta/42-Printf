#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "./libft/libft.h"

int	ft_putchr(char c);
int	ft_putstri(char *str);
int	ft_putnb(long n);
int	ft_putnbrunsig(unsigned long nbr);
int	ft_putptr(int arg);
int	ft_puthex(int arg, char flag);
int	ft_printf(const char *content, ...);

#endif