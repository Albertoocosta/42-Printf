#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "./libft/libft.h"

void	ft_putchar_fd(char c, int fd);
void	ft_putstrs_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

int	ft_printf(const char *content, ...);

#endif