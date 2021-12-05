SRCS = ft_printf.c

OBJS = $(SRCS:c=o)

CFLAGS = -Wall -Werror -Wextra

Name = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re