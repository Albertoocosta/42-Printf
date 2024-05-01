CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c
NAME = libftprintf.a
LIBC = ar rcs
RM = rm -f
OBJS = $(SRCS:.c=.o)
${NAME}: ${OBJS}
	${LIBC}	${NAME} ${OBJS}
%.o: %.cc
	${CC}	${CFLAGS} -c $< -o $@
all:	${NAME}
clean:
	${RM}	${OBJS}
fclean: clean
	${RM}	${NAME}
re: fclean all
.PHONY : all clean fclean re