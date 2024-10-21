NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRC =	ft_hexa.c \
		ft_printf.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putnbunsi.c \
		ft_putstr.c \
		ft_voidpoint.c
OBJS = ${SRC:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}
.c.o:
	cc ${FLAGS} -c $< -o $@
clean:
	rm -rf ${OBJS}
fclean: clean
	rm -rf ${NAME}

re: fclean all
