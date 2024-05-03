#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "./libft/libft.h"

int	ft_putchr(char c);
int	ft_putstri(char *str);
int	ft_putnb(int n);
int	ft_putnbrunsig(unsigned int nbr);
int	ft_printf(const char *content, ...);

#endif