CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c ft_putchr.c ft_putnb.c ft_putnbrunsig.c ft_putstri.c ft_puthex.c ft_putptr.c
NAME = libftprintf.a
LIBFT = ./libft
AR = ar rcs
RM = rm -f
OBJS = $(SRCS:.c=.o)

all:	$(NAME)

%.o: %.c
	$(CC)	$(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	make -C $(LIBFT)
	cp	libft/libft.a $(NAME)
	$(AR)	$(NAME) $(OBJS)
clean:
	$(RM)	$(OBJS)
	@make clean -C $(LIBFT)

fclean: clean
	$(RM)	$(NAME)
	@$(RM) $(LIBFT)/libft.a

re: fclean all

.PHONY : all clean fclean re