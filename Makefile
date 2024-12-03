NAME = libftprintf.a

CC = cc

FLAGS = -Werror -Wextra -Wall


SRC = ft_printf.c ft_puthexal.c ft_putnbr.c ft_putunsig.c \
ft_putchar.c ft_puthexau.c ft_putstr.c ft_putadress.c

OBJC = $(SRC:%.c=%.o)

all : $(NAME)

$(NAME): $(OBJC)
	ar rcs $(NAME) $(OBJC)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf ${OBJC}

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean 
