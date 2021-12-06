SRCS = srcs/*.c libft/*.c

OBJS = *.o

CFLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS) libft/*.o

$(OBJS): $(SRCS)
	make re -C libft	
	gcc $(CFLAGS) -c $<

clean:
	make clean -C libft
	rm -f $(OBJS)

fclean: clean
	make fclean -C libft
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re